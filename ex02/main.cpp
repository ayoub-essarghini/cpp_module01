#include <iostream>
#include <string>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "Adress of s : " << &s << std::endl;
    std::cout << "Adress of s by stringPTR : " << stringPTR << std::endl;
    std::cout << "Adress of s by stringREF : " << &stringREF << std::endl;

    std::cout << "Value by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value by stringREF : " << stringREF << std::endl;
}