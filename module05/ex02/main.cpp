#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int  main()
{
    try
    {
        // AForm Form("form", false, 23, 32);
        Bureaucrat b("walid", 2);
        // ShrubberyCreationForm obj;
        RobotomyRequestForm obj;
        obj.beSigned(b);
        b.executeForm(obj);
        // b.executeForm(obj);
        // b.executeForm(obj);
        // b.executeForm(obj);
        // b.executeForm(obj);
        // Form.decrement();
        // Form.decrement();
    /* do some stuff with Forms */

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    /* handle exception */
    }
}