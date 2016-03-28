#ifndef HOME_H
#define HOME_H
#include <SFML/Graphics.hpp>

class Home
{
    public:
        Home();
        virtual ~Home();
        void draw();

    protected:

    private:
        sf::CircleShape shape;
        sf::RenderWindow window;
};

#endif // HOME_H
