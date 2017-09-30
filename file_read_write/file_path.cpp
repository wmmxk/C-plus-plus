#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream(fin);
    fin.open("test.txt",std::ios_base::app);
	{
		fin << "Add 3rd line.\n";
		fin << "Add 4th line";
   		fin.close();
	}

	return 0;
}
