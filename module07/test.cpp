#include <iostream>

template <typename t, int lenght> 

class a
{
    public:
    t arr[lenght];
    void fun(t a)
    {
        std::cout << "am here" << std::endl;
    }
};

int main()
{
     int * a = new int();
     std::cout << *a << std::endl;
}


// int main()
// {
//     int x;
//     std::cin >> x;
//     a <int, x> arr;
//     arr.fun(3);
// }