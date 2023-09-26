#include "Fixed.hpp"

// int main()
// {
//     Fixed a(10);
//     Fixed b(10);
//     // std::cout << a.getRawBits() << b.getRawBits() << std::endl;
//     Fixed sum  = a /b;
//     // std::cout << "after\n";
//     // a.setRawBits(a.toInt());
//     sum.setRawBits(sum.toInt());
//     std::cout << sum << std::endl;
//     // std::cout << a.getRawBits() << b.getRawBits() << std::endl;
//     // std::cout << sum << std::endl;
//     exit(1);
//     // std::cout << a << std::endl; 
//     // Fixed  const a(1);
//     // Fixed b;
//     // b = Fixed (1);
//     // std::cout << ;
//     //  << std::endl;
// }

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << b << std::endl;
    // b.toFloat();
    // std::cout <<  b.toFloat() << std::endl;
    exit (1);
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}