#include <SFML/Graphics.hpp>

#include "Player.h"
#include "MovableBackground.h"
#include "Objects.h"

int main()
{
	//Ikkunan luonti
	sf::RenderWindow window(sf::VideoMode(640, 480), "");
	window.setPosition(sf::Vector2i(10, 50));
	window.setSize(sf::Vector2u(640, 480));
	window.setVerticalSyncEnabled(true);
	window.setFramerateLimit(80);
	

	Player Pelaaja;
	MovableBackground Tausta;
	Objects Asteroidit;


	
	while (window.isOpen())
	{
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			
			if (event.type == sf::Event::Closed)
				window.close();
		}
	
		window.clear();

		

		
		Tausta.render(window);
		Tausta.update(window,1);
		Pelaaja.movementPlayer(window);
		Asteroidit.spawn(window);

		window.display(); 
		
	
	}

	return 0;
}
