#include "Form.hpp"

Form::Form() : name("default")
{
    this->is_signed = false;
    this->grade_sign = 40;
    this->grade_execute = 40;
}

const char *Form::GradeTooHighException::what() const throw() 
{
    return "GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw() 
{
    return "GradeTooLowException";
}

Form::Form(std::string name, bool is_signed, int grade_sign, int grade_execute) : name(name), 
    is_signed(is_signed), grade_sign(grade_sign), grade_execute(grade_execute)
{
    if (grade_sign < 1 || grade_execute < 1)
        throw Form::GradeTooHighException();
    else if (grade_sign > 150 || grade_execute > 150)
        throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &obj)
{
    std::cout << "assignment operator called" << std::endl;
    Form tmp(obj);
    std::swap(*this, tmp);
    return *this;
}

Form::Form(const Form &obj) : name(obj.name)
{
    std::cout << "copy constructor called" << std::endl;
    this->grade_sign = obj.grade_sign;
    this->grade_execute = obj.grade_execute;
    this->is_signed = obj.is_signed;
}

std::string Form::getName() const
{
    return this->name;
}

int Form::getGradSign() const
{
    return this->grade_sign;
}

int Form::getGradeExecute() const
{
    return this->grade_execute;
}

bool Form::getSign() const
{
    return this->is_signed;
}

void    Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->getGradSign())
        this->is_signed = true;
    if (obj.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    std::string boool = "NOT";
    if (obj.getSign() == true)
        boool ="YES";
    os << obj.getName() << " " << boool << " signed" << ", Form grade sign is " << obj.getGradSign() << " and Form grade execute is " << obj.getGradeExecute() << " ." << std::endl;
    return os;
}

Form::~Form()
{

}