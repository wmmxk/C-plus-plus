#include <unistd.h>
#include <iostream>
/*
 *source: https://www.programcreek.com/2011/02/double-star-after-type-and-before-variable/
 */

using namespace std;
int test(int argc, char **argv) {
         // argc stands for argument count; argv stands for argument value; 
        // Start at 1 to skip the program name                                                                                                                                                                                              
        for (int i = 1; i < argc; ++i) {
                for (int j = 0; argv[i][j] != '\0'; ++j) {                                                                                                                                                                                 
                        cout << "execute 1: " << *(argv + i) << '\n'; // this and next line are the same                                                                     // *(argv +i) is a pointer, because it points to an array of characters, so cout does not print an address                                                                                           
                        cout << "execute 2: " << argv[i] << '\n';
			// argv[0]  is the executable file, so *(argv+1) points to your first argument
                        cout << "execute 3: " << *(*(argv + i) + j) << '\n';
                }
        }
 
}
 
int main(int argc, char **argv){
 
        //how to pass pointers                                                                                                                                                                                                              
        cout << argc << "parameters"<<endl;
        test(argc, argv);
 
}
