//in the program value of a,b and p,q take value as a reference means a=p=10 and b=q=20.
#include<iostream>
using namespace std;
void swaping(int &p,int &q){
    int temp=p;
    p=q;
    q=temp;
    cout<<p<<" "<<q<<endl;
}
int main(){
    int a=10;
    int b=20;
    swaping(a,b);
    cout<<a<<" "<<b;
    return 0;
}
