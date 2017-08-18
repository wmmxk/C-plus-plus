#include <iostream>
/* This code is to show how virtual methods work. To show this, you need at 
 * least 1 level of inheritance and a downcast to demonstrate it.
 *
 * You use a Base *p pointer to point to an derived instance.
 * when you call p->Says(), if Says is not virtual, then Base's version of it 
 * executes, ignoring the fact that p acctually points to a derived instance.
 *
 * If Says is virtual, p->Says() executes the "leafmost" override of Says,
 * fully taking into account the actual class of the pointed-to item. 
 *
 * The difference between virtual and non-virtual is actually pretty crucial:
 * the former allow runtime polymorphism, a core concetp of OO programming,
 * while the latter doesn't.
 *
 */

using namespace std;
class Animal
{        
    public: 
      // turn the following virtual modifier on/off to see what happens
      //virtual   
      std::string Says() { return "?"; }  
};

class Dog: public Animal
{
    public: std::string Says() { return "Woof"; }
};


int main()
{
    Dog* d = new Dog();
    Animal* a = d;       // refer to Dog instance with Animal pointer
    cout << d->Says()
	 << "\n";   // always Woof
    cout << a->Says()
	 << "\n" ;   // Woof or ?, depends on virtual
    return 0;
}
