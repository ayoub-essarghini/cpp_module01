#include <iostream>
#include <string>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "Adress of s : " << &s << std::endl;
    std::cout << "Adress of stringPTR : " << stringPTR << std::endl;
    std::cout << "Adress of stringREF : " << &stringREF << std::endl;

    std::cout << "Value by s : " << s << std::endl;
    std::cout << "Value by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value by stringREF : " << stringREF << std::endl;
}