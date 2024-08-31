#include "HumanA.hpp"

HumanA::HumanA(const std::string& _name, Weapon& weapon) : name(_name) , weapon(weapon){

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon& weapon)
{
    this->weapon = weapon;
}