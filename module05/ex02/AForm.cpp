#include "AForm.hpp"

AForm::AForm() : name("default")
{
    this->is_signed = false;
    this->grade_sign = 40;
    this->grade_execute = 40;
}

const char *AForm::GradeTooHighException::what() const noexcept 
{
    return "GradeTooHighException";
}

const char *AForm::GradeTooLowException::what() const noexcept 
{
    return "GradeTooLowException";
}

// AForm::AForm(std::string name, bool is_signed, int grade_sign, int grade_execute) : name(name), 
//     is_signed(is_signed), grade_sign(grade_sign), grade_execute(grade_execute)
// {
//     if (grade_sign < 1 || grade_execute < 1)
//         throw AForm::GradeTooHighException();
//     else if (grade_sign > 150 || grade_execute > 150)
//         throw AForm::GradeTooLowException();
// }

// AForm &AForm::operator=(const AForm &obj)
// {
//     std::cout << "assignment operator called" << std::endl;
//     AForm tmp(obj);
//     std::swap(*this, tmp);
//     return *this;
// }

// AForm::AForm(const AForm &obj) : name(obj.name)
// {
//     std::cout << "copy constructor called" << std::endl;
//     this->grade_sign = obj.grade_sign;
//     this->grade_execute = obj.grade_execute;
//     this->is_signed = obj.is_signed;
// }

std::string AForm::getName() const
{
    return this->name;
}

int AForm::getGradSign() const
{
    return this->grade_sign;
}

int AForm::getGradeExecute() const
{
    return this->grade_execute;
}

bool AForm::getSign() const
{
    return this->is_signed;
}

void    AForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->getGradSign())
        this->is_signed = true;
    if (obj.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
    std::string boool = "NOT";
    if (obj.getSign() == true)
        boool ="YES";
    os << obj.getName() << " " << boool << " signed" << ", AForm grade sign is " << obj.getGradSign() << " and AForm grade execute is " << obj.getGradeExecute() << " ." << std::endl;
    return os;
}

// AForm::~AForm()
// {

// }