#include "Bureaucrat.hpp"
#include "Intern.hpp"

int  main()
{
    try
    {
        Bureaucrat b("walid", 2);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        // rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        // rrf = someRandomIntern.makeForm("Presidential request", "Bender");
        rrf->beSigned(b);
        b.executeForm(*rrf);
        delete rrf;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}