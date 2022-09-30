/******************************************************************************
Call-by-value: The call by value method of passing arguments to a function copies the actual value
of an argument into the formal parameter of the function. 
In this case, changes made to the parameter inside the function have no effect on the argument. 
By default, C programming uses call by value to pass arguments.
*******************************************************************************/

#include <iostream>

using namespace std;
void swap(int,int);
int main()
{
    int a=10, b=20;
    cout<<"before swap :"<<a<<" "<<b<<endl;//actual arguments
    swap(a,b);
    cout<<"after swap :"<<a<<" "<<b<<endl;//actuall arguments
    return 0;
}
void swap(int x,int y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"after swap :"<<x<<" "<<y<<endl;//fotmal arguments
}
