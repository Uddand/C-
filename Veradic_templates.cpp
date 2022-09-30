/******************************************************************************
VERIADIC TEMPLATES : Templates are fixed size parameters those are specified at decleration time
and we can pass diffrent data types are passed as parameters is not possible.
this issue overcome to use veriadic templates.

SYNTAX:- template(typename arg, typename... args)
return_type function_name(arg var1, args... var2)
Note: The arguments must be put inside angular brackets.

*******************************************************************************/

#include <iostream>

using namespace std;
void print() { //recursive function: calling itself.
    cout<<"emtey class!"<<endl;
}
template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    cout << var1 << endl;
 
    print(var2...);
}
 
// Driver code
int main()
{
    print(2,"shaik",'a',5.0);
 
    return 0;
}


//the veriadic template searching arguments the arguments doesn't maching.
//printf() is called


Example:-2
#include <iostream>

using namespace std;

void sum() {
    cout<<"sum function is called empty ";
}
template<typename T,typename ...args>
void sum(T n, args ...Args) {
    cout<<"value is :"<<n<<","<<endl;
    sum(Args ...);
}
int main() {
    sum(7,"uddand",'u',5.7f,7.898);
    return 0;
    
}



Example:-
#include <iostream>

using namespace std;
template<typename T>
T adder(T v) {
  return v;
}

template<typename T, typename... Args>
T adder(T first, Args... args) {
  return first + adder(args...);
}
int main() {
  long sum = adder(1, 2, 3, 8, 7);
  cout<<sum<<endl;
   char s=adder('A','B');
   cout<<s<<endl;
   std:: string s1="delta",s2="iot",s3="pvt";
   std::string str=adder(s1,s2,s3);
  cout<<str<<endl;
   
}

