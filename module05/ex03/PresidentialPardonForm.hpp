#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class AForm;
class PresidentialPardonForm : public AForm
{
    int sign;
    int exec;
    std::string target;
    public:
            virtual int    execute(Bureaucrat const & executor) const;
            PresidentialPardonForm();
            PresidentialPardonForm(PresidentialPardonForm const &obj);
            PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
            virtual ~PresidentialPardonForm();
            virtual std::string getName() const;
            PresidentialPardonForm(std::string target);
};
#endif