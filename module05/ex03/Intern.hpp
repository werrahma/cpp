#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
            class  IvalidArgument : public  std::exception
            {
                public :
                        const char * what () const throw();
            };
            Intern();
            Intern(const Intern &obj);
            Intern    &operator=(const Intern &obj);
            ~Intern();
            AForm    *makeForm(std::string name, std::string target);
};

#endif