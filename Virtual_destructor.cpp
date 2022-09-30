VIRTUAL Destructor in cpp
         
#include<iostream>
using namespace std;

class Base {
    public:
    virtual void fun() { cout<<"Base fun"<<endl;}
    Base() {
        cout<<"base constructor"<<endl;
    }
   virtual ~Base() {
        cout<<"base destructor"<<endl;
    }
};
class Derived:public Base {
    public:
    virtual void func() {cout<<"Derived fun"<<endl;}
    Derived() {
        cout<<"Derived Constructor"<<endl;
    }
    ~Derived() {
        cout<<"Derived destructor"<<endl;
    }
};
int main() {
    Base *b1=new Base();
    Base *b2=new Derived();
    b1->fun();
    b2->fun();
    delete b1;
    delete b2;
    return 0;
}
