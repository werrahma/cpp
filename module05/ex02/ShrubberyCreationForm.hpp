#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
    int sign;
    int exec;
    std::string target;
    public:
            virtual int    execute(Bureaucrat const & executor) const;
            ShrubberyCreationForm();
            ShrubberyCreationForm(ShrubberyCreationForm const &obj);
            ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
            virtual ~ShrubberyCreationForm();
            virtual std::string getName() const;
            ShrubberyCreationForm(std::string target);
};

#endif