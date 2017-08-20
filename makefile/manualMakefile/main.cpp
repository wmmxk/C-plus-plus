#include <iostream>
#include "functions.h"
//source: http://mrbook.org/blog/tutorials/make/
int main(){
    print_hello();
    std::cout << std::endl;
    std::cout << "The factorial of 5 is " << factorial(5) << std::endl;
    return 0;
}
