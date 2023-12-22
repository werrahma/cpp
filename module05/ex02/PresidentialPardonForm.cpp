#include "PresidentialPardonForm.hpp"

int    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExecute())
    {
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
    this->sign = 145;
    this->exec = 137;
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
}