#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void    Harl::complain(std::string level)
{
    Harl obj;
    void (Harl::*ptr[4])(void) = {
        &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if (level == str[i])
        {
            (obj.*ptr[i])();
            return ;
        }
    }
    std::cout << "error" << std::endl;
    
}