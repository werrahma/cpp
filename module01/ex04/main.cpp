#include "replace.hpp"
int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "error" << std::endl;
        exit (1);
    } 
    size_t found;
    std::string line;
    std::ifstream in(av[1]);
    if (!in.is_open())
    {
        std::cerr << "open failed" << std::endl;
        exit(1);
    }
    std::string file_replace = av[1];
    std::string outfile = file_replace + ".replace";
    std::ofstream out(outfile.c_str());
    size_t i = 0;
    if (!out.is_open())
    {
        std::cerr << "open failed" << std::endl;
        exit(1);
    }
    else
    {
        while(getline(in, line))
        {
            i = 0;
            while(line[i])
            {
                found = line.find(av[2]);
                if (found != std::string::npos)
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
