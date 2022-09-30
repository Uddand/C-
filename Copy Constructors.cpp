/*COPY CONSTRUCTOR:- A Copy constructor is an overloaded constructor used to declare and initialize an object from another object.
Copy Constructor is of two types:
Default Copy constructor: The compiler defines the default copy constructor. If the user defines no copy constructor, compiler supplies its constructor.
User Defined constructor: The programmer defines the user-defined constructor.
->Syntax Of User-defined Copy Constructor:
Class_name(const class_name &old_object);  

class copy
{  
    copy(copy &x) //  copy constructor.  
   {  
       // copyconstructor.  
   }  
}   
In the above case, copy constructor can be called in the following ways:
copy c2(c1);
copy c2=c1;
*/
EXAMPLE:-1.....
#include <iostream>  
using namespace std;  
class copy  
{  
   public:  
    int x;
int y; 
   copy(int a,int b)                // parameterized constructor.  
    {  
      x=a;
y=b;  
    }  
    copy(copy &i)               // copy constructor  
    {  
        x = i.x;  
y=i.y;
    }  
};  
int main()  
{  A a1(30,20);               // Calling the parameterized constructor.  
 A a2(a1); 
 cout<<"c1 value:"<<a1.x<<" "<<a1.y<<endl;//  Calling the copy constructor.  
 cout<<"c2 value :"<<a2.x<<" "<<a2.y<<endl;
 
  return 0;  
}    

OUTPUT:-
c1 value:30 20
c2 value:30 20

-> Two types of copies are produced by the constructor:
1) Shallow copy
2) Deep copy
Shallow Copy:-
The default copy constructor can only produce the shallow copy.
A Shallow copy is defined as the process of creating the copy of an object by copying data of all the member variables as it is.
#include <iostream>  
  
using namespace std;  
  
class shallow
{  
    int a;  
    int b;  
    int *p;  
    public:  
       void setdata(int x,int y,int z)  
    {  
        a=x;  
        b=y;  
        p=z;  
    }  
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of p is : " <<p<< std::endl;  
    }  
};  
int main()  
{  
  shallow d1;  
  d1.setdata(4,5,7);  
  Demo d2 = d1;  
  d2.showdata();  
    return 0;  
}  
output:-value of a is : 4   
value of b is : 5  
value of p is : 7 


DEEP COPY:-The mumber variables etc. for any objects have their own memory locations.
-> Any changes in obj1 is not reflects in obj2.

EXAMPLE:-1.........


#include<iostream>
using namespace std;
class deep {
    public: int var;
    deep(int x){
        var=x;
    }
    deep(const deep &obj) {
        var = obj.var;
    }
};
int main(){
    deep d1(10);
    deep d2 = d1;
    cout<<"Before the values";
    cout<<"d1 :"<<d1.var<<endl;
    cout<<"d2 :"<<d2.var<<endl;
    
    d1.var =20;
    cout<<"after the values"<<endl;
    cout<<"d1 :"<<d1.var<<endl;
    cout<<"d2 :"<<d2.var<<endl;
    return 0;
}
//OUTPUT:-
//Before the valuesd1 :10
//d2 :10
//after the values
//d1 :20
//d2 :10
