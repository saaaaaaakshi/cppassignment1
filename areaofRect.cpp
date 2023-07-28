#include<iostream>
using namespace std;
int main(){
    int l,b;
    int area,perimeter;
    cin>>l;
    cin>>b;
    //Area of Rectangle=l*b
    area=l*b;
    //Perimeter of Rectangle=2*(l+b)
    perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"Area is greater than perimeter.";
    }
    else{
        cout<<"Perimeter of rectangle is greater than its area";
    }
}