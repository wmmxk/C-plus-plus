#include <iostream>

int main()
{
	int i = 3;
	int* ptr_to_i = &i;
	int** ptr_to_ptr_to_i = &ptr_to_i;

	std::cout << "dereference twice "
	          << **ptr_to_ptr_to_i << std::endl;
        return 0;
}
