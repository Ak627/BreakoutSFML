#include <SFML/Graphics.hpp>
#include<iostream>
#include "brick.h"
#include "ball.h"
using namespace std;


//instantiate some bricks

brick b1(50, 100);
brick b2(200, 100);
brick b3(350, 100);
brick b4(500, 100);
brick b5(650, 100);

brick b6(50, 200);
brick b7(200, 200);
brick b8(350, 200);
brick b9(500, 200);
brick b10(650, 200);

ball b(400, 400);

int main()
{

	sf::RenderWindow window(sf::VideoMode(800, 800), "Breakout"); //set up screen
	sf::RectangleShape rect;


	while (window.isOpen())//GAME LOOP--------------------------------
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		//physics section------------------------------
		b.move();

		//render section-------------------------------
		window.clear();

		b.draw(window);

		//draw bricks

		b1.draw(window);
		b2.draw(window);
		b3.draw(window);
		b4.draw(window);
		b5.draw(window);

		b6.draw(window);
		b7.draw(window);
		b8.draw(window);
		b9.draw(window);
		b10.draw(window);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main