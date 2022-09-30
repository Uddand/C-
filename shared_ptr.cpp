/******************************************************************************
SHARED_PTR: shared_ptr is smart pointer which can share the ownership of object.
->Several shared_ptr can point to the same object.
->It keep a reference counter to maintain how many shared_ptrs is pointed same object.
->the last shared_ptr is goes out of scope then the managed block is deleted.
->shared_ptr is thred safe and thred not safe.
 a)control block is not safe 
 b)managed object is not thred safe.
->if there are 3 ways shared_ptr is destroy manage object.
 a)the last shared_ptr id goes out of the scope.
 b)if you inistilize shared_ptr with some other shared_ptr.
 c)if you reset the shared_ptr.
->reference_count doesn't work when we use reference or pointer of shared_ptr
->use_count() is used to count the how many shared_ptrs are pointed on same object.

*******************************************************************************/

#include <iostream>
#include<memory>
using namespace std;
class foo {
    int x;
    public:
    foo(int a) {
        x=a;
    }
    int getx() {
        return x;
    }
    ~foo() {
        cout<<"~foo is destruct"<<endl;
    }
};
int main()
{
   shared_ptr<foo>sp1(new foo(100));
   cout<<"sp1 x value :"<<sp1->getx()<<endl;
   cout<<"sp1 cout :"<<sp1.use_count()<<endl;
   shared_ptr<foo>sp2=sp1;
    //shared_ptr<foo>&sp2=sp1; ....... assign & or * the reference count is shown 1 and
    //~foo is only once called
   cout<<"sp2 x value :"<<sp2->getx()<<endl;
   cout<<"sp2 cout :"<<sp2.use_count()<<endl;
   cout<<"sp1 cout :"<<sp1.use_count()<<endl;

    return 0;
}
