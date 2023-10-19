#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        ideas[i] = "Brain";
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain    &Brain::operator=(const Brain &Brain)
{
    std::cout << "Brain Copy assegment called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = Brain.ideas[i];
    return *this;
}

Brain::Brain(const Brain &Brain)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = Brain;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

void    Brain::set(std::string name, int i)
{
    if (i < 100)
        ideas[i] = name;
}

std::string    Brain::get(int i) const
{
    if (i < 100)
        return (ideas[i]);
    return NULL;
}