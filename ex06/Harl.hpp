#pragma once

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

#define _RED "\033[1;31m"
#define _YELLOW "\033[1;33m"
#define _CYAN "\033[1;36m"
#define _GREEN "\033[1;32m"
#define _BLUE "\033[1;34m"
#define _RESET "\033[0m"


class Harl
{


    
public:
    Harl();
    ~Harl();
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void complain( std::string level );

};





#endif