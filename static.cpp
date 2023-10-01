#include <bits/stdc++.h>
using namespace std;

class scaler
{
    static int number;
    public:
        void set()
        {
            number = 2;
        }
        static void get_no_of_topics()
        {
            cout << "The number of topics already assigned: "
            << number << endl;
        }
};
int scaler::number=25;

int main()
{
    scaler S; //object of class scaler
    S.set();
    // scaler::get_no_of_topics(); // object using '.' operator to access static member function
    scaler a; //object of class scaler
    a.get_no_of_topics();
    return 0;
}


