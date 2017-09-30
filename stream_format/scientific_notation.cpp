/*
 
 cout use scientifi notation on a large number by default

 you can use std::fixed to reset that
 
 */

#include <iostream>
#include <cmath>
#include <iomanip> // std::setprecision

int main()
{
		std::cout <<"default is using scientifi notation "
			      <<pow(2,32)
				  <<"\n";

		std::cout << std::fixed
				<< std::setprecision(0)
				<< pow(2,32)
				<<"\n";


		return 0;
}
