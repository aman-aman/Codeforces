#include "C:\Users\USER-1\Downloads\boost_1_63_0.7z"
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

int main()
{
   using namespace boost::multiprecision;

   int128_t v = 1;

   // Do some fixed precision arithmetic:
   for(unsigned i = 1; i <= 20; ++i)
      v *= i;

   std::cout << v << std::endl; // prints 20!

   // Repeat at arbitrary precision:
   cpp_int u = 1;
   for(unsigned i = 1; i <= 100; ++i)
      u *= i;

   std::cout << u << std::endl; // prints 100!

   return 0;
}
