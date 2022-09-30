/******************************************************************************
DUNAMIC_CASTING :  The dynamic_cast can be used at run time and find out currect down_cast
->Need at least one virtual function in base class
Note 0:If test case is success,the return value type is "new type"
Note 1:If test case is fail and the "new type" is pointer ,it returns null pointer.
Note 2:if test cae is fail and the "new type" is a reference,it trow a exception
   that matches handler of type is "Bas_cast"
*******************************************************************************/

#include <iostream>

using namespace std;
class Base {
    public:
    virtual void print() {
        cout<<"Base Class"<<endl;
    }
};
class Derived1 : public Base {
    void print() {
        cout<<"Derived Class...1"<<endl;
    }
};
class Derived2 : public Base {
    void print() {
    cout<<"Derived2 class...2"<<endl;
}
};
int main()
{
    Derived1 d1;
    Derived2 d2;
    Base *ptr1=dynamic_cast<Base*>(&d1);//Derived Class...1     ......note 0

    //Base *ptr2=dynamic_cast<Base*>(&d2);//Derived2 class...2
    ptr1->print();
    //ptr2->print();
    Derived2 *ptr2=dynamic_cast<Derived2*>(ptr1);
    if(ptr2==nullptr) { //..........................................note 1
        cout<<"null"<<endl; //null
    }
    return 0;
}

Example-2…….
#include <iostream>

using namespace std;
class Base {
    public:
    int x=10,y=20;
    virtual void print() {
        cout<<"Base Class -> add :"<<x+y<<endl;
    }
};
class Derived1 : public Base {
    public:
    int a=2,b=5;
    void print() {
        cout<<"Derived1 Class->Mul :"<<a*b<<endl;
    }
};
class Derived2 : public Base {
    public:
    int l=10,m=5;
    void print() {
    cout<<"Derived2 class->sub:"<<l-m<<endl;
}
};
int main()
{
    Derived1 d1;
    Derived2 d2;
    Base *ptr1=dynamic_cast<Base*>(&d1);//Derived Class...1     ......note 0

    //Base *ptr2=dynamic_cast<Base*>(&d2);//Derived2 class...2
    ptr1->print();
    //ptr2->print();
    Derived2 *ptr2=dynamic_cast<Derived2*>(ptr1);
    if(ptr2==nullptr) { //..........................................note 1
        cout<<"null"<<endl; //null
    }
    return 0;
}
