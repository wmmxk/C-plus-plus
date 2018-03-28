#include <iostream>
extern int g_x; // forward declaration for the extern global variable, g_x, defined in global.cpp

int main() {
    extern int g_y; // g_y can be used beyond this point in main() only
    g_x = 5;
    std::cout << g_y
              << "\n";

    return 0;



}
