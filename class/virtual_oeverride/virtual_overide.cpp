#include <iostream>
/*
 *http://en.cppreference.com/w/cpp/language/virtual
Virtual functions are member functions whose behavior can be overridden in derived classes. As opposed to non-virtual functions, the overridden behavior is preserved even if there is no compile-time information about the actual type of the class. If a derived class is handled using pointer or reference to the base class, a call to an overridden virtual function would invoke the behavior defined in the derived class. This behavior is suppressed if the function is selected using qualified name lookup (that is, if the function's name appears to the right of the scope resolution operator ::)

 */
struct Base {
   virtual void f() {
       std::cout << "base\n";
   }
};
struct Derived : Base {
    void f() override { // 'override' is optional
        std::cout << "derived\n";
    }
};
int main()
{
    Base b;
    Derived d;
 
    // virtual function call through reference
    Base& br = b; // the type of br is Base&
    Base& dr = d; // the type of dr is Base& as  well
    br.f(); // prints "base"
    dr.f(); // prints "derived"
 
    // virtual function call through pointer
    Base* bp = &b; // the type of bp is Base*
    Base* dp = &d; // the type of dp is Base* as  well
    bp->f(); // prints "base"
    dp->f(); // prints "derived"
 
    // non-virtual function call
    br.Base::f(); // prints "base"
    dr.Base::f(); // prints "base"
}
