/* STATIC_CAST:- is used for the normal/ordinary type conversion. This is also the cast responsible for implicit type coercion and can also be called explicitly. You should use it in cases like converting float to int, char to int, etc. This can cast related type classes.
*/
#include <iostream>
using namespace std;
int main() {
   int x = 65;
   char y = x; // C like cast
   char z = static_cast<char>(x);
   cout << "Value after casting: " <<z;
}


EXAMPLE:-1......

DYNAMIC_CAST: This cast is used for handling polymorphism. You only need to use it when you're casting to a derived class. This is exclusively to be used in inheritance when you cast from base class to derived class.
#include<iostream>
using namespace std;
class MyClass1 {
   public:
      virtual void print()const {
         cout << "This is from MyClass1\n";
      }
};
class MyClass2 {
   public:
      virtual void print()const {
         cout << "This is from MyClass2\n";
      }
};
class MyClass3: public MyClass1, public MyClass2 {
   public:
      void print()const {
         cout << "This is from MyClass3\n";
      }
};
int main(){
   MyClass1* a = new MyClass1;
   MyClass2* b = new MyClass2;
   MyClass3* c = new MyClass3;
   a -> print();
   b -> print();
   c -> print();
   b = dynamic_cast< MyClass2*>(a); //This cast will be failed
   if (b)
      b->print();
   else
      cout << "no MyClass2\n";
   a = c;
   a -> print(); //Printing from MyClass3
   b = dynamic_cast< MyClass2*>(a); //Successfully casting is done
   if (b)
      b -> print();
   else
      cout << "no MyClass2\n";
}

EXAMPLE:-2.........
#include<iostream>
using namespace std;
class parent
{
  public:
    virtual void vehicle()
    {
      cout<<"Parent";
      }
};
class child : public parent
{
  public:
    void car()
    {
      cout<<"Child";
      }
};
int main()
{
  parent *p = new child;
  child *c;
  c = dynamic_cast<child*>(p);     
  cout<< c <<"\n";
  c->car();
}
