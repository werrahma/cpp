#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::cout << "address of the string variable" << std::endl;
    std::string *stringPTR = &str;
    std::string& stringREF = str;
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "value of the string variable" << std::endl;
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}
