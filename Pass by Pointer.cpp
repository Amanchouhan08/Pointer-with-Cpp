//this is the program to undersatand the concept of "Pass by Pointer".
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
