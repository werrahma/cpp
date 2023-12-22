#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    const std::string name;
    bool    is_signed;
    int grade_sign;
    int grade_execute;
    public:
            class GradeTooHighException : public std::exception
            {
                public:
                const char * what () const noexcept;
            };
            class GradeTooLowException : public std::exception
            {
                public:
                const char * what () const noexcept;
            };
            void    beSigned(Bureaucrat &obj);
            // AForm(std::string name, bool is_signed, int grade_sign, int grade_execute);
            AForm();
            // AForm(const AForm &obj);
            // AForm &operator=(const AForm &obj);
            // ~AForm();
            virtual int execute(Bureaucrat const & executor) const = 0;
            std::string getName() const;
            bool getSign() const;
            int getGradSign() const;
            int getGradeExecute() const;
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif