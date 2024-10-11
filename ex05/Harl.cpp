#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << _GREEN << "DEBUG :" << _RESET << std::endl << "     Hello, Iam debug message " << std::endl;
}

void Harl::info(void)
{
    std::cout << _CYAN << "INFO :"<< _RESET << std::endl << "    Hi, Iam info message " <<std::endl;
}

void Harl::warning(void)
{
    std::cout << _YELLOW << "WARNING :" << _RESET<< std::endl << "   Hello Iam warning message "<<std::endl;
}

void Harl::error(void)
{
    std::cout << _RED << "ERROR :"<< _RESET << std::endl << "    Hello Iam error message "<<std::endl;;
}

void nofunc(std::string name)
{
    std::cout << " There is no function called : \" " << _YELLOW << name << _RESET << "\""<< std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO","WARNING", "ERROR"};
    void (Harl::*functions[])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    int i = 0;
    while (i < 4 && levels[i] != level)
        i++;
    switch (i)
    {
    case 4:
        nofunc(level);
        break;
    default:
        (this->*functions[i])();
        break;
    }
    
}