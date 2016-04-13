#include "Player.h"


Player::Player()
{
	
	if (!alus.loadFromFile("Alus.png"))
	{

		std::cout << "Ei voi ladata kuvaa!";
	}

	alus.setSmooth(false);
	

	AlusSprite.setTexture(alus);
	AlusSprite.setPosition(320, 240);

}



Player::~Player()
{
}

void Player::movementPlayer(sf::RenderWindow &window)
{



	if (AlusSprite.getPosition().x < 0)
	{
		AlusSprite.setPosition(AlusSprite.getPosition().x + 2, AlusSprite.getPosition().y);
	}
	if (AlusSprite.getPosition().x > 600)
	{
		AlusSprite.setPosition(AlusSprite.getPosition().x - 2, AlusSprite.getPosition().y);
	}
	if (AlusSprite.getPosition().y < 0)
	{
		AlusSprite.setPosition(AlusSprite.getPosition().x , AlusSprite.getPosition().y+2);
	}
	if (AlusSprite.getPosition().y > 446)
	{
		AlusSprite.setPosition(AlusSprite.getPosition().x, AlusSprite.getPosition().y - 2);
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			AlusSprite.move(2, 0);
			

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{

			AlusSprite.move(-2, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{

			AlusSprite.move(0, 2);

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			AlusSprite.move(0, -2);

		
	}
	window.draw(AlusSprite);
	
}

