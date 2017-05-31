#include <iostream>

int main()
{
int y = 10;

int * px;

px = &y;

//int z = *px;

std::cout << "y value" << y << std::endl;

std::cout << "y address " << &y << std::endl;
std::cout << "pointer x " << px << std::endl;


std::cout <<"value pointed by the pointer x " << *px << std::endl; 
std::cout << "value in y address " << *&y << std::endl;

*px = 60;

std::cout << "y value after modified by deferencing a pointer " << y << std::endl;

}
