//twice the array value using the pointer in cpp

#include<iostream>
using namespace std;
void doble(int *ptr){
    for(int j=0;j<5;j++){
        *(ptr+j)=ptr[j]*ptr[j];
    }
}
int main(){
    int num[5]={1,2,3,4,5};
    doble(num);
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}
