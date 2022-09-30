VTABLE AND VPOINTER:- The class contain virtual function,then compiler automatically create the VTABLE. the VTABLE is contain the address of class.
-> *VPTR in Base class. it is point to VTABLE.

#include <iostream>
using namespace std;
class Base {
    public:
    virtual void f1() {
        cout<<"Base F1 function :"<<endl;
    }
    virtual void f2() {
        cout<<"Base F2 function :"<<endl;
    }
};

class Derived1 : public Base {
    public:
    virtual void f1() {
        cout<<"Derived1 is  F1 function :"<<endl;
    }
};

class Derived2 : public Base {
    public:
    virtual void f2() {
        cout<<"Derived2 is F2 function :"<<endl;
    }
};

int main() {
    Derived1 d1;
    Base *bptr = &d1;
    bptr->f1();
    bptr ->f2();
    Derived2 d2;
   Base *ptr = &d2;
    ptr ->f1();
    ptr ->f2();
    return 0;
}
