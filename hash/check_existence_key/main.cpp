/*source: STL book P142
	*
	* string of nubmers and underscore is also checked
	*
	*
	*/

#include <iostream>
#include <map>
#include <iomanip>
#include <string>

int main()
{
	std::map<std::string, size_t> people;
 auto ret_pr = people.insert(std::make_pair("Bill",48));

 ret_pr = people.insert(std::make_pair("123_4",48));
	
	for (const auto& p: people)
		  std::cout << std::setw(10)
					         << std::left //left lineup
														<< p.first
														<< " "
														<< p.second
														<< "\n";

char new_person[] = "12_34"; 
if(!people.count(new_person)) {
		people.insert(std::make_pair(new_person,38));
				std::cout << "Insert a new person\n"
					        << new_person
													<< "\n";
				}

return 0;
}
