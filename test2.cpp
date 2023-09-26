#include <iostream>
using namespace std;

// namespace youness
// {
//     int a = 9;
//     void    cout(void)
//     {
//         std::cout << "youess from name space" << std::endl;
//     }
// }

// class a
// {
//     private:
//         int b;
//     public:
//         a(int);
    
// };




// int main()
// {
//     std::cout << "here\n";
//     youness::cout();
// }


int fun(int a, int b)
{
    return (a + b);
}

int main()
{
    std::cout << fun(3, 4) << std::endl;
}