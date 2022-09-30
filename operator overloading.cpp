/* OPERATOR OVERLOADING :
                Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type. For example, C++ provides the ability to add the variables of the user-defined data type that is applied to the built-in data types.
Operator that cannot be overloaded are as follows:

Scope operator (::)
Sizeof
member selector(.)
member pointer selector(*)
ternary operator(?:)
SYNTAX:return_type class_name  : : operator op(argument_list)  
{  
     // body of the function.  
}  
*/

#include<iostream>
using namespace std;
#include <iostream>    
using namespace std;    
class unary   
{    
   private:    
      int num;    
   public:    
       unary(int x) {
           num=x;
       }  
       void operator ++()         {     
          num = num+2;     
       }    
       void Print() {     
           cout<<"The Count is: "<<num;     
       }    
};    
int main()    
{    
    unary u(10);    
    ++u;  // calling of a function "void operator ++()"    
    u.Print();    
    return 0;    
}    
OUTPUT:-
The Count is: 12

EXAMPLE:-2.....
#include<iostream>
using namespace std;
#include <iostream>    
using namespace std;    
class unary   
{    
   private:    
      int num;    
   public:    
       unary(int x) {
           num=x;
       }  
       void operator --()         {     
          num = num-2;     
       }    
       void Print() {     
           cout<<"The Count is: "<<num;     
       }    
};    
int main()    
{    
    unary u(10);    
    --u;  // calling of a function "void operator ++()"    
    u.Print();    
    return 0;    
}    


BINARY OPERATOR OVERLOADING:This operator can be used in perform the peration between user defined data types
#include <iostream>  
using namespace std;  
class Binary
{  
    
    int x;  
      public:  
      Binary(){}  
    Binary(int i)  
    {  
       x=i;  
    }  
    void operator+(Binary);  
    void display();  
};  
  
void Binary :: operator+(Binary a)  
{  
     
    int m = x+a.x;  
    cout<<"The result of the addition of two objects is : "<<m;  
  
}  
int main()  
{  
    Binary a1(5);  
    Binary a2(4);  
    a1+a2;  
    return 0;  
}  
