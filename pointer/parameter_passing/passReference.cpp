//#include "stdafx.h" // Uncomment this line if using Visual Studio
#include <iostream>

void Binky(int &x, int y)
{
  x *= 2;
		y = 0;
}


int main()
{
 int a = 4, b = 20;
	std::cout << a << " before Binky " << ".\n";
	Binky(a,b);	
	std::cout << a << " after Binky"<< std::endl;
 return 0;
}

