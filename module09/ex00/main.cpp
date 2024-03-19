#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    try
    {
        Bitcoin obj;
        obj.FullDataUseDatabase();
        obj.CheckIfValidInput(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

