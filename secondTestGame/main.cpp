#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "My Game");
	sf::CircleShape shape(100.f);
	
	shape.setFillColor(sf::Color::Green);
	shape.setOutlineColor(sf::Color::Cyan);
	shape.setOutlineThickness(3.0f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}