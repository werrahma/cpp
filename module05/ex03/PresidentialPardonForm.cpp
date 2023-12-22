#include "PresidentialPardonForm.hpp"

int    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExecute())
    {
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
        throw GradeTooLowException();
    return 0;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target)
{}

std::string PresidentialPardonForm::getName() const
{
    return this->target;
}

PresidentialPardonForm::PresidentialPardonForm()
{
    this->target = "default";
    this->sign = 25;
    this->exec = 5;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : AForm(obj)
{
    *this = obj;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    this->sign = obj.sign;
    this->exec = obj.exec;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "destructor called" << std::endl;
}