#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the sides of triangle:";
    cin>>a>>b>>c;
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b)){
        if((a==b)&&(b==c)){
            cout<<"equilateral triangle";
        }
        else if((a==b)||(b==c)||(a==c)){
            cout<<"isosceles triangle";
        }
        else{
            cout<<"scalene triangle";
        }
    }
    else{
        cout<<"not valid triangle";
    }
}