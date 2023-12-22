#include "ShrubberyCreationForm.hpp"
#include <fstream>

int    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExecute())
    {
        std::ofstream outputFile((this->getName() +"_shrubbery").c_str());
        if (outputFile.is_open())
        {
            outputFile << "      *\n     ***\n    *****\n   *******\n  *********\n ***********\
            \n*************\n     |||\n     |||\n     |||\n--------------" << std::endl;
            outputFile.close();
        }
        else {
            std::cerr << "Unable to create the file." << std::endl;
            return 1;
        }
    }
    else
        throw GradeTooLowException();
    return 0;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm()
{
    this->sign = 145;
    this->exec = 137;
    this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : AForm(obj)
{
    *this = obj;
}

std::string ShrubberyCreationForm::getName() const
{
    return this->target;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    this->sign = obj.sign;
    this->exec = obj.exec;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}