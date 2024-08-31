#pragma once
#ifndef Zombie_HPP
# define Zombie_HPP


#include <iostream>
#include <string>
#include <sstream>

class Zombie{

private:
    std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};



#endif