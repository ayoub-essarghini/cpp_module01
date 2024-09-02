#include "Harl.hpp"
#include <string>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
    std::cout << _GREEN << "DEBUG :" << _RESET << std::endl
              << "  Hello, I am debug message " << std::endl;
}

void Harl::info(void)
{
    std::cout << _CYAN << "INFO :" << _RESET << std::endl
              << "    Hi, I am info message " << std::endl;
}

void Harl::warning(void)
{
    std::cout << _YELLOW << "WARNING :" << _RESET << std::endl
              << "   Hello, I am warning message " << std::endl;
}

void Harl::error(void)
{
    std::cout << _RED << "ERROR :" << _RESET << std::endl
              << "    Hello, I am error message " << std::endl;
}

void Harl::complain(std::string level)
{

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int i = 0;
    while (i < 4 && levels[i] != level)
        i++;

    switch (i)
    {
    case 0:
        (this->*functions[0])();
        break;
    case 1:
        (this->*functions[1])();
        break;
    case 2:
        (this->*functions[2])();
        break;
    case 3:
        (this->*functions[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
