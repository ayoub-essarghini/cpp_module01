#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie *foo = newZombie("Foo");

    foo->announce();

    delete foo;

    randomChump("hoho");

}