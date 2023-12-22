#include "Bureaucrat.hpp"
#include "Form.hpp"

int  main()
{
    try
    {
        Form Form("form", false, 23, 32);
        Bureaucrat b("walid", 2);
        Form.beSigned(b);
        b.signForm(Form);
        std::cout << Form;
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