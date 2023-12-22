#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    const std::string name;
    bool    is_signed;
    int grade_sign;
    int grade_execute;
    public:
            class GradeTooHighException : public std::exception
            {
                public:
                const char * what () const throw();
            };
            class GradeTooLowException : public std::exception
            {
                public:
                const char * what () const throw();
            };
            void    beSigned(Bureaucrat &obj);
            Form(std::string name, bool is_signed, int grade_sign, int grade_execute);
            Form();
            Form(const Form &obj);
            Form &operator=(const Form &obj);
            ~Form();
            std::string getName() const;
            bool getSign() const;
            int getGradSign() const;
            int getGradeExecute() const;
};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif