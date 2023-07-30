#include <iostream>
#include <ctype.h>

int main (int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac < 2)
    {
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (0);
    }
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] = toupper(av[i][j]);
            std :: cout << av[i][j];
            j++;
        }
        i++;
    }
}