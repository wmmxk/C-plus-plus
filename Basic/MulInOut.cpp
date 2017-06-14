//#include "stdafx.h" // Uncomment this line if using Visual Studio
#include <iostream>
 
int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x;	// no need to initialize x since we're going to overwrite that value on the very next line
    char y;
				int z;
				std::cin >> x >> y ; // read number from console and store it in x
    std::cout << "First number:  " << x << " A char: "<< y << " last number: " << z <<std::endl;
    return 0;
}

