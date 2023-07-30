#include <iostream>
using namespace std;

class Data
{
    public:
    int  len;
    string name;
    void    print()
    {
        cout << len << "hello world" << endl;
    }
    Data(int l, string n): len (l), name(n)
    {
        // len = 45;
        // name = "walid";
    }
};

int main(int ac, char **av)
{
    Data obj(atoi(av[1]), av[2]);


    // obj.len = 5;
    // obj.name = "walid";
    std :: cout << obj.len << "     " << obj.name << endl;
    // obj.print();

}