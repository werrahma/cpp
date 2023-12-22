#include "Bureaucrat.hpp"

int  main()
{
    try
    {
        Bureaucrat obj("walid", 4242);
        std::cout << obj;
        // obj.decrement();
        // obj.decrement();
    /* do some stuff with bureaucrats */

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    /* handle exception */
    }
}