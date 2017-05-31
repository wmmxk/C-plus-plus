#include <iostream>
using namespace std;

int change(int inVar);


int main()

{

int x, y;
x = 25;

y = change(x);

cout<< "x before " << x << endl;

cout<< "x after" << y << endl;
}

int change(int inVar)
{

inVar = inVar - 5;
return inVar;

}
