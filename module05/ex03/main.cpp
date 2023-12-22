#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int  main()
{
    try
    {
        // AForm Form("form", false, 23, 32);
        Bureaucrat b("walid", 2);
        // ShrubberyCreationForm obj;
        PresidentialPardonForm obj;
        obj.beSigned(b);
        b.executeForm(obj);
        // b.executeForm(obj);
        // b.executeForm(obj);
        // b.executeForm(obj);
        // b.executeForm(obj);
        // Form.decrement();
        // Form.decrement();

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    /* handle exception */
    }
}