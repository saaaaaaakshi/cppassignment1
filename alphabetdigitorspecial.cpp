#include<iostream>
using namespace std;
int main(){
    char inp_ch;
    int ascii;
    cin>>inp_ch;
    ascii=(int)inp_ch;
    if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122)){
        cout<<"alphabet";
    }
    else if((ascii>=48 && ascii<=57)){
        cout<<"digit";
    }
    else{
        cout<<"special character";
    }
    return 0;
}