#include <iostream>
#include "apples.h"

//Constructors


Apples::Apples() {

	name = "apples";
	color = "red";
	place = "kitchen";

}

Apples::Apples( std::string c, std::string p) {

	name = "apple";
	color = c;
	place = p;
}

void Apples::inquire() {
  using std::cout;
		using std::cin;

		std::string response;
		cout << "Do you eat apples?" ;
		getline ( cin, response );
		if ( response == "no")
			  cout << "\nOh good. \n";
		else
			  cout << "\nDon't eat me, please!\n";
}


