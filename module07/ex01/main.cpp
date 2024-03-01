#include "iter.hpp"

class Awesome
{
  int _n;
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );
  // std::cout << "------------------------" << std::endl;
  // iter( tab, 5, nothing<const int> );
  // iter( tab2, 5, nothing<Awesome> );

  return 0;
}