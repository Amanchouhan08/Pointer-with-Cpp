#include<iostream>
using namespace std;
int main(){
    char arr[5]={12345};
    char *ptr=arr;
// these two line print all char value
    cout<<arr<<endl;
    cout<<ptr<<endl;
// these two line print the address of the first index
    cout<<(void*) arr<<endl; //typecasting
    cout<<(void*) ptr<<endl;

    return 0;

}
