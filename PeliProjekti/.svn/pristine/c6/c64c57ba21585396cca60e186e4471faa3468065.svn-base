#include "Objects.h"
#include <iostream>




Objects::Objects()
{
	if (!Asteroid.loadFromFile("Asteroid1.png"))
	{

		std::cout << "Ei voi ladata kuvaa!";
	}




	Aste1.setTexture(Asteroid);

	for (int i = 0; i < 7; i++)
	{

		do
		{
			PosX = rand() % 500;
			AIT = find(Asteroidit.begin(), Asteroidit.end(), PosX);



		} while (AIT != Asteroidit.end());


		Asteroidit.push_back(PosX);

		/*if (PosX != Aste1.getPosition().x)
		{
		Aste1.setPosition(PosX, PosY);
		}*/
		/*Aste1.setPosition(PosX, PosY);*/

		/*Asteroidit.push_back(PosY);*/
		Aste1.setPosition(PosX, PosY);
	}
	
}
Objects::~Objects()
{
}


void Objects::spawn(sf::RenderWindow &window)
{
	Aste1.move(-2,0);

	for (int i = 0; i < 40; i++)
	{
		Aste1.getRotation();
		Aste1.rotate(0.01);

	}

	

	
		
	/*Aste1.setPosition(Aste1.getPosition().x - 10,Aste1.getPosition().y -70);*/

	
	for (int i = 0; i < 7; i++)
	{
		window.draw(Aste1);
	}
	

}





