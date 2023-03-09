#pragma once
#include <SFML/Graphics.hpp>


class ball {
private:
	int xpos;
	int ypos;
	sf::CircleShape circle;
public:
	ball(int x, int y);
	void move();
	void draw(sf::RenderWindow& window);
};