#include "Fixed.hpp"

int main( void ) {
fixed a;
fixed b( a );
fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
// exit (1);
std::cout << c.getRawBits() << std::endl;
return 0;
}