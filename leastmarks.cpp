#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"enter the integers:";
    cin>>A>>B>>C;
    if((A<B)&&(A<C)){
        cout<<"'A' has the least marks";
    }
    else if((B<A)&&(B<C)){
        cout<<"'B' has the least marks";
    }
    else{
        cout<<"'C' has the least marks";
    }
}