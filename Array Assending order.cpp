ARRAY ASSENDING OREDR :

#include <iostream>

using namespace std;

int main()
{
    int i,j,size,temp;
    int arr[25];
    cout<<"enter the total no of elements :"<<endl;
    cin>>size;
    cout<<"enter the array elements :"<<endl;
    for(i=0;i<size;i++) {
        cin>>arr[i];
    }
    for(i=0;i<size;i++) {
        for(j=i;j<size;j++) {
            if(arr[i] > arr[j+1]) {
                temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    cout<<"assending elements are :"<<endl;
    for(i=1;i<=size;i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}
