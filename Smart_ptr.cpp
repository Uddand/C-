SMART POINTERS: smart pointers remove the chance of memory leak
smart pointers in class which is wrops a raw pointers,to manage the life time of the pointers
it make sure the object is deleted if it is not reference any more
Three types of Smart pointers:
1) unique_pointers
2)shared Pointers
UNIQUE_POINTERS:-  it is one object is created pointer P1 is pointed to this
-> we cannot share the another pointer but, we can transfer the control to P2 by removing P1.
EXAMPLE:
#include<iostream>
using namespace std;
class Rectangle {
int length;
int breadth;
public:
Rectangle(int l, int b) {
length=l;
breadth=b;
}
int main area() {
return length*breadth;
}
};
int main() {
unique_ptr<Rectangle>ptr(new Rectangle(10,5));
cout<<ptr->area(); // area=50
ptr2=move(ptr)
cout<<ptr2->area();
return 0;
}



SHARED POINTERS:-
More then one pointer is point to one object and it will maintain a reference.
-> if we remove P1,then the reference counter reduce.
EXAMPLE:-1
#include<iostream>
using namespace std;
class Rectangle {
int length;
int breadth;
public:
Rectangle(int l, int b) {
length=l;
breadth=b;
}
int main area() {
return length*breadth;
}
};
int main() {
shared_ptr<Rectangle>P1(new Rectangle(10,5));
cout<<P1->area()<<endl;  //50
shared_ptr<Rectangle>P2;
P2 = P1;
cout<< P2 -> area()<<endl; // 50
cout<<P1->area()<<endl; // 50
cout<<p1.use_count()<<endl; //2
return 0;
}

