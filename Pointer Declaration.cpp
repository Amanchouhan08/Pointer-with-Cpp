#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a; //create pointer with ptr name
    cout<<&a<<endl; // this line print the address of a
    cout<<ptr<<endl; // this line also print the address of variable a
    cout<<*ptr<<endl; //this line print the what value store inside the variable a
    int b=20;
    ptr=&b;     // now ptr hold the address of vaiable b
    cout<<ptr<<endl;  //it will print the address of b
    cout<<*ptr<<endl; //it will print the value store inside the variable b
    cout<<sizeof(ptr);
}
