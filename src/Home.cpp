#include "Home.h"

Home::Home()
{
    window.create(sf::VideoMode(200, 200), "SFML works!");

    shape.setRadius(100.f);
    shape.setFillColor(sf::Color::Green);
}

Home::~Home()
{
    //dtor
}

void Home::draw()
{
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
}
