STRUCTURE PADDING :


/* 
STRUCTURE PADDING : Structure padding is a concept in C that adds
the one or more empty bytes between the memory addresses to align the data in memory.

*/

#include<iostream>
using namespace std;
struct base{
    int a;
    char b;
    double c;
};
int main() {
   base b1;
   cout<<"size of structure:"<<sizeof(b1)<<"bytes"<<endl;
   
   
    return 0;
}

	Actually the structure size is 13bytes (int a=4bytes + char b=1bytes + double c=8bytes = 13bytes.) but structure padding is create the empty bytes between the memory address to align the data of memory.so,
	This problem overcome to use the 1)using #pragma pack(1). 2)using attributer.

->using pragma pack(1):-----------
#include<iosteram>
#pragma pack(1)
Struct base {
Int a;
Char b;
Double c;
}
Int main() {
Base b1;
Cout<<”size of structure :”<<sizeof(b1<<”bytes”<<endl;
Return 0;
}


#include<iostream>

using namespace std;
struct base{
    int a;
    char b;
    double c;
}__attribute__((packed)); ;
int main() {
   base b1;
   cout<<"size of structure:"<<sizeof(b1)<<"bytes"<<endl;
   
   
    return 0;
}
Output:---
Size of structure : 13bytes

