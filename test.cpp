#include <iostream>

class HH
{
    private:
        std::string name;
    public:
        void setrername(std::string nn)
        {
            name = nn;
        }
        std::string geter()
        {
            return(name);
        }
};

int main()
{
    HH a;

    a.setrername("mahdi");

    std::cout << a.geter() <<std::endl;

}