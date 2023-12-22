#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    const std::string name;
    int     grade;
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
            Bureaucrat(std::string name, int grade);
            Bureaucrat();
            Bureaucrat(const Bureaucrat &obj);
            Bureaucrat &operator=(const Bureaucrat &obj);
            ~Bureaucrat();
            std::string getName() const;
            int getGrade() const;
            void increment();
            void decrement();
            void    signForm(Form &obj);

};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif