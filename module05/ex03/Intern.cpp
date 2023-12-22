#include "Intern.hpp"

AForm  *Intern::makeForm(std::string name, std::string target)
{
    std::cout << "Intern creates " << name << std::endl;
    switch(name)
    {
        case "robotomy request" :
            std::cout << "robotomy request" << std::endl;
            break ;
        case "shrubbery request" :
            std::cout << "shrubbery request" << std::endl;
            break;
        case "presidential  request" :
            std::cout << "presidential  request" << std::endl;
            break;
        default:
            std::cout << "invalid name" << std::endl;
    }
    return new RobotomyRequestForm();
}