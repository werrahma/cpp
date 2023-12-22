#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class AForm;
class RobotomyRequestForm : public AForm
{
    int sign;
    int exec;
    std::string target;
    public:
            virtual int    execute(Bureaucrat const & executor) const;
            RobotomyRequestForm();
            RobotomyRequestForm(RobotomyRequestForm const &obj);
            RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
            virtual ~RobotomyRequestForm();
            virtual std::string getName() const;
            RobotomyRequestForm(std::string target);
};

#endif