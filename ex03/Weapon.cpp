#include "Weapon.hpp"

Weapon::Weapon()
{
}
Weapon::Weapon(const std::string &type) : type(type)
{
}

Weapon::~Weapon()
{
}

std::string &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(const std::string &_type)
{
    this->type = _type;
}