//this is the program to undersatand the concept of "Pass by Pointer".
//in this program we pass the address of variable num to ptr.
#include<iostream>
using namespace std;
void inc(int *ptr){
    *ptr=*ptr+1;
}
int main(){
    int num=10;
    inc(&num);
    cout<<num;
    return 0;

}
