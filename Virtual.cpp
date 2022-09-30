/*  VIRTUAL fUNCTION: The virtual function is a member function in the base class that is                                                 			redefined in Derived class.
->it is decled to using Virtual keyword
->it is used to tell the compiler to perform task on late or binding on the function
->there is necessity to use the single pointer to refer to all the objects of the Derived classes.so,
->the base class pointer contains the address of derived class objects
->so,always exicute the base class functions
->this problem resolve to use the "VIRTUAL" Function.*/

EXAMPLE:- 1.....................

#include <iostream>
using namespace std;

class Base {
    int x = 20;
    public:
  virtual  void display(){
        cout<<"value of x:"<<x<<endl;
    }
    
};

class Derived : public Base {
    int y=40;
    public:
    void display(){
        cout<<"value of y:"<<y<<endl;
    }
};

int main()
{
  Base *b;
  Derived d;
  b=&d;
  b->display();  // the value of y =40
  
  Base b1;
  b=&b1;
  b->display();  // the value of x = 20

    return 0;
}

EXAMPLE:- 2 ..............................

#include<iostream>
using namespace std;
class Base {
int length=10;
int breadth=20;
public:
 virtual void display() {
cout<<"area :"<<length * breadth<<endl;
}
};
class Derived : public Base {
    int a=100;
    float b =12.3f;
    public:
    void display() {
        cout<<"add :"<<a+b<<endl;
    }
};
int main(){
 Base *b;
 Derived d;
 b=&d;
 b->display(); // add = 112.3
 
 Base b1;
 b=&b1;
 b->display(); // add = 200
 return 0;
}
   



