#include "Bureaucrat.hpp"

void    Bureaucrat::executeForm(AForm const &form)
{
    if (!form.execute(*this))
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    else
        std::cout << this->getName() << " can't execut " << form.getName() << std::endl;

}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "GradeTooLowException";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat() : name("default")
{
    // std::cout << "default constructor called" << std::endl;
    this->grade = 40;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "assignment operator called" << std::endl;
    Bureaucrat tmp(obj);
    std::swap(*this, tmp);
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
    std::cout << "copy constructor called" << std::endl;
    this->grade = obj.grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void    Bureaucrat::increment()
{
    grade--;
    // std::cout << grade << std::endl;
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
}

void    Bureaucrat::signForm(AForm &obj)
{
    if (this->getGrade() <= obj.getGradSign())
        std::cout << this->getName() << " signed " << obj.getName()
        << std::endl;
    else
        std::cout << this->getName() << " couldn’t sign " << obj.getName()
        << " because bureaucrat’s grade is low enough" << std::endl;
}

void  Bureaucrat::decrement()
{
    grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << " ." << std::endl;
    return os;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "destructor called" << std::endl;
}