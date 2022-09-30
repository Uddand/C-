Bitset


#include <iostream>
#include<conio.h>
#include<bitset>
using namespace std;

int main() {
   bitset<8>bitset1;
   cout<<"bitset1 is not initilized! :"<<bitset1<<endl;//0000 0000
   bitset<8>bitset2(177);
   cout<<"bitset2 is initilized :"<<bitset2<<endl;//1011 0001
   bitset<8>bitset3(string("11111100"));
   cout<<"bitset3 is initilized string :"<<bitset3<<endl;//1111 1100
   bitset2.reset();
   cout<<"reset the bitset2 :"<<bitset2<<endl;//0000 0000
   bitset2.set(1);
   cout<<"bitset2 is set(1) :"<<bitset2<<endl;//0000 0010
   bitset2.set(7);
   cout<<"bitset2 is set(7) :"<<bitset2<<endl;//1000 0010
   cout<<bitset2.count()<<"set bits in bitset2 : "<<endl;//2
   bitset3.set();
   cout<<"bitset3 is set :"<<bitset3<<endl;//1111 1111
   bitset3.reset(3);
   cout<<"bitset3 is reset(3) :"<<bitset3<<endl;//1111 0111
   bitset3.reset(5);
   cout<<"bitset3 is reset(5) :"<<bitset3<<endl;//1101 0111
   cout<<"bitset3 is reset count is :"<<bitset3.count()<<endl;//6
   bitset3.flip(2);
   cout<<"bitset3 is flip(2) :"<<bitset3<<endl;//1101 0011
   bitset3.flip(2);
   cout<<"bitset3 is again flip(2) :"<<bitset3<<endl;// 1101 0111
   return 0;
}



Output :-
bitset1 is not initilized! :00000000
bitset2 is initilized :10110001
bitset3 is initilized string :11111100
reset the bitset2 :00000000
bitset2 is set(1) :00000010
bitset2 is set(7) :10000010
2set bits in bitset2 : 
bitset3 is set :11111111
bitset3 is reset(3) :11110111
bitset3 is reset(5) :11010111
bitset3 is reset count is :6
bitset3 is flip(2) :11010011
bitset3 is again flip(2) :11010111

