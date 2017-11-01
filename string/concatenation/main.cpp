#include <iostream>
#include <string>


main() {
	std::string str1("123");
	std::string str2("_");
	std::string str3("456");
 
	std::string str = str1+"_"+str3;

	std::cout << "whole string "
		   << str
					<< "\n";

return 0;
}
