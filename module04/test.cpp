#include "iostream"


class a
{
    int a;
    public:
        virtual int     fun()
        {
            return 1;
        }
        virtual ~a()
        {
            std::cout << "'base destructor" << std::endl;
        }
};

class b : public a
{
    int b;
    public:
     int fun()
    {
        return 1;
    }
        virtual ~b()
        {
            std::cout << "derived desctructor" << std::endl;
        }
};

int main()
{
    a *obj = new b();
    delete obj;
}