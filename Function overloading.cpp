/* FUNCTION OVERLOADING : 
 -> two functions can have the same name if the number and/or type of arguments passed is different.
->These functions having the same name but different arguments are known as overloaded functions.
example:
// same name different arguments
int test() { }
int test(int a) { }
float test(double a) { }
int test(int a, double b) { }
*/
EXAMPLE:-1.........
#include <iostream>    
using namespace std;    
class Cal {    
    public:    
 int add(int a,int b){      
        return a + b;      
    }      
 int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
};     
int main(void) {    
    Cal C;                                                    //     class object declaration.   
    cout<<C.add(10, 20)<<endl;      // 30
    cout<<C.add(12, 20, 23);      // 55
   return 0;    
}    


EXAMPLE:-2
#include <iostream>    
using namespace std;    
class Base {
int l;
int H;
public:
Base(int a, int b) {
l=a;
H=b;
}
 void display(){
    cout<<"area:"<<l*H<<endl;
}
};
class Derived{
int x;
int y;
int z;
public:
Derived(int p,int q,int r) {
x=p;
y=q;
z=r;
}
void display(){
    cout<<"area:"<<x*y*z<<endl;
}
};
int main() {
Derived d2(10,20,30);
Base d1(10,20);
d1.display();
d2.display();
return 0;
}


