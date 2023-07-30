#include <iostream>
using namespace std;

namespace youness
{
    int a = 9;
    void    cout(void)
    {
        std::cout << "youess from name space" << std::endl;
    }
}

class a
{
    private:
        int b;
    public:
        a(int);
    
};




int main()
{
    std::cout << "here\n";
    youness::cout();
}