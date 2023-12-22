#include "RobotomyRequestForm.hpp"
static int nb;

int    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExecute())
    {
        bool res;
        nb++;
        if (nb > 1)
            res = nb % 2;
        else{
            std::srand(time(0));
            if (std::rand() % 2 == 0)
                res = true;
            else
                res = false;
        }
        if (res == true)
        {
            std::cout << this->getName() << " success" << std::endl;
        }
        else
            std::cout << this->getName() << " failed" << std::endl;
    }
    else
        throw GradeTooLowException();
    return 0;
}

std::string RobotomyRequestForm::getName() const
{
    return this->target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : target(target)
{}

RobotomyRequestForm::RobotomyRequestForm()
{
    this->target = "default";
    this->sign = 145;
    this->exec = 137;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : AForm(obj)
{
    *this = obj;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    this->sign = obj.sign;
    this->exec = obj.exec;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}