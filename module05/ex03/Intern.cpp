#include "Intern.hpp"

const char *Intern::IvalidArgument::what() const throw()
{
    return "invalid name";
}

AForm  *Intern::makeForm(std::string name, std::string target)
{
    std::cout << "Intern creates " << name << std::endl;
    int nb = -1;
    std::string string[3] = {"robotomy request", "shrubbery request", "presidential  request"};
    for (int i = 0; i < 3; i++)
    {
        if (string[i] == name)
            nb = i;
    }
    switch(nb)
    {
        case 0 :
            return new RobotomyRequestForm(target);
            break ;
        case 1 :
            return new ShrubberyCreationForm(target);
            break;
        case 2 :
            return new PresidentialPardonForm(target);
            break;
        default:
            throw Intern::IvalidArgument();
    }
    return NULL;
}

Intern::Intern()
{
    // std::cout << "default constructor called" << std::endl;
}

Intern  &Intern::operator=(const Intern &obj)
{
    // std::cout << "assignment operator called" << std::endl;
    (void)obj;
    return *this;
}

Intern::Intern(const Intern &obj)
{
    *this = obj;
    // std::cout << "copy constructor called" << std::endl;
}

Intern::~Intern()
{
    // std::cout << "destructor called" << std::endl;
}