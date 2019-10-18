#include <iostream>
#include "Application.h"

Application::Application(int width, int height, std::string name)
{
	//TODO: only allow one instance of application to be created, throw an error otherwise!
	// as a singleton... maybe

	//set up a few managers
	_timeManager = new TimeManager();

	_window.create(sf::VideoMode(width, height), name);

	#ifdef SFML_SYSTEM_WINDOWS
		__windowsHelper.setIcon(_window.getSystemHandle());
	#endif
}

int Application::Run()
{
	sf::CircleShape shape(_window.getSize().x/2);
	shape.setFillColor(sf::Color::White);

	sf::Texture shapeTexture;
	shapeTexture.loadFromFile("assets/sfml.png");
	shape.setTexture(&shapeTexture);

	sf::Event event;
	while (_window.isOpen())
	{
		while (_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				_window.close();
			}
		}

		_window.clear();
		_window.draw(shape);
		_window.display();
	}

	return EXIT_SUCCESS;
}