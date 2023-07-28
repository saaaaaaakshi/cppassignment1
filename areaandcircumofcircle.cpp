#include<iostream>
using namespace std;
int main(){
    int r;
    float area,circumference;
    float pi=3.14;
    cout<<"enter the radius of circle:";
    cin>>r;
    area=pi*r*r;
    circumference=2*pi*r;
    if(area>circumference){
        cout<<"area is greater than circumference";
    }
    else{
        cout<<"circumference is greater than area";
    }
}