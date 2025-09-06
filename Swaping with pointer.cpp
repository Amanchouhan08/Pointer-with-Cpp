#include <iostream>
using namespace std;
void swping(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main() {
    int a=10;
    int b=20;
    swping(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}
