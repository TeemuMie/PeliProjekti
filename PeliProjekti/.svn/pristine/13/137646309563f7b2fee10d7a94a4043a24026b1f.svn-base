#include "MovableBackground.h"


MovableBackground::MovableBackground()
{
	bgspeed = 0.3;
	
	if (!tausta.loadFromFile("BackG.png"))
	{


	}


	tausta.setSmooth(true);
	tausta.setRepeated(true);
	
	TaustaSprite.setTexture(tausta);

	if (!tausta2.loadFromFile("BackG2.png"))
	{


	}


	tausta2.setSmooth(true);
	tausta2.setRepeated(true);

	TaustaSprite2.setTexture(tausta2);



}


MovableBackground::~MovableBackground()
{
}

void MovableBackground::update(sf::RenderWindow &window, float deltaTime)
{
	

	TaustaSprite.move(-1.1, 0);
		
	TaustaSprite2.setPosition(TaustaSprite.getPosition().x +800,0);
	TaustaSprite2.move(-2.1, 0);

	if (TaustaSprite.getPosition().x < -800)
		{
		
			TaustaSprite.setPosition(TaustaSprite.getPosition().x + 800,0);
			
			
		}
		else
		{
			

		}
		window.draw(TaustaSprite2);
		window.draw(TaustaSprite);
		


}

void MovableBackground::render(sf::RenderWindow &window)
{
	/*sf::Texture tausta;
	if (!tausta.loadFromFile("tausta.png"))
	{


	}


	tausta.setSmooth(true);
	tausta.setRepeated(true);
	sf::Sprite TaustaSprite;
	TaustaSprite.setTexture(tausta);

	window.draw(TaustaSprite);*/



}