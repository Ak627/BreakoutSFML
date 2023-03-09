#include "ball.h"


ball::ball(int x, int y) {
	xpos = x;
	ypos = y;
}

void ball::move() {
	int vx = .1;
	int vy = .1;
	
	
	if (xpos < 0 || xpos + 20 > 800) {
		vx *= -1;
	}
	if (ypos < 0 || ypos + 20 >800) {
		vy *= -1;
	}

	xpos += vx;
	ypos += vy;

	circle.setPosition(xpos, ypos);
}

void ball::draw(sf::RenderWindow& window) {
	circle.setRadius(30);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(xpos, ypos);
	window.draw(circle);
}