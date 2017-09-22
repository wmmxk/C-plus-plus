#include<iostream>
using namespace std;

class E
{
public:
    struct X
    {
        int v;
    };

    X * c_x;
};

int main()
{
    E e;

// 2. Instantiate an 'X' outside 'E':
				E::X a;
				a.v = 5;
    e.c_x = & a;
    cout<< "the value of x.v of object x: \n"
        << e.c_x->v << endl;
}
