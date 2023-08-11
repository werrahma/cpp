#include <iostream>

// class HH
// {
//     private:
//         std::string name;
//     public:
//         void setrername(std::string nn)
//         {
//             name = nn;
//         }
//         std::string geter()
//         {
//             return(name);
//         }
// };

// int main()
// {
//     HH a;

//     a.setrername("mahdi");

//     std::cout << a.geter() <<std::endl;

// }

int fun()
{
    return (3 + 4);
}

namespace test
{
    int fun()
    {
        return (1+1);
    }
};

int main()
{
    std::cout << fun() << '\n';
    std::cout << test::fun() << std::endl;
    return (0);
}