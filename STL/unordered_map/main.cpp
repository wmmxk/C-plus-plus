/*
To compile this code: g++ -std=c++11 main.cpp  -o main

*/
#include <iostream>
#include <unordered_map>
#include <string>
 
int main()
{
	// Create an empty unordered_map
	std::unordered_map<std::string, int> wordMap;
 
	// Insert Few elements in map
	wordMap.insert( { "First", 1 });
	wordMap.insert(	{ "Second", 2 });
	wordMap.insert(	{ "Third", 3 });
 
	// Overwrite value of an element
	wordMap["Third"] = 8;
 
	// Iterate Over the unordered_map and display elements
	for (std::pair<std::string, int> element : wordMap)
		std::cout << element.first << " :: " << element.second << std::endl;
 
	return 0;
}
