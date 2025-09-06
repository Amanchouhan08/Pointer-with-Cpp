#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *ptr=&a; //single pointer
    int **ptr1=&ptr; //Double pointer
    int ***ptr2=&ptr1; //Triple pointer
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    return 0;
}
