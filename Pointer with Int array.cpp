#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    cout<<arr<<endl;
    cout<<*arr<<endl;
    // it will print the address 
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr+i<<endl;
    }
    //it will print the value
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<*(arr+i)<<endl;
    }
    //print address
    cout<<ptr<<" "<<ptr+1<<" "<<endl;
    // print value
    cout<<*ptr<<" "<<*(ptr+1)<<" "<<endl;

    //print all the value
    for(int i=0;i<5;i++){
        cout<<*ptr<<endl; //print the value
        ptr++; // increase the address
    }
    return 0;
}
