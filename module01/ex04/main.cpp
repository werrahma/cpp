#include "replace.hpp"
int main(int ac, char **av)
{
    (void)ac;
    size_t found;
    std::string line;
    std::ifstream in(av[1]);
    std::string file_replace = av[1];
    std::string outfile = file_replace + ".replace";
    std::ofstream out(outfile.c_str());
    size_t i = 0;
    if (ac != 4)
    {
        std::cout << "error" << std::endl;
        return (1);
    }
    else if (in.is_open())
    {
        while(getline(in, line))
        {
            i = 0;
            while(line[i])
            {
                found = line.find(av[2]);
                if (found != std::string::npos && found == i)
                {
                    line.erase(found, strlen(av[2]));
                    line.insert(found, av[3]);
                }
                i++;
            }
            out << line << std::endl;
        }
    }
}

/////// file 1 namr : semkha1  {ldfsjldfjsljfdslj yhakakcjhsd jkhdskjhfdskhfdskjh}
///////////  file smekha.replace  {  djlkdfjsljfds }
