#include "iter.hpp"

// int main()
// {
//     float *arr = new float(4);
//     float (*ptr)(void) = &::nothing;
//     ::iter(arr, 4, ptr);
//     for (int i = 0; i < 4; i++)
//         std::cout << arr[i] << std::endl;
//     delete []arr;
// }


class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
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

  return 0;
}