#include <iostream>  
using namespace std;
  
int main()  
{  
    float x, y;  
  
    cout<<"Enter the point(x, y)\n";  
    cin>>x>>y;
  
    if(x == 0 && y == 0)  
    {  
        cout<<"Point lies on the Origin\n";  
    }  
    else if(x == 0)  
    {  
        cout<<"Point lies on y-axis\n";  
    }  
    else if(y == 0)  
    {  
        cout<<"Point lies on x-axis\n";  
    }  
    else  
    {  
        cout<<"Point neither lies on x-axis nor on y-axis\n";  
    }  
  
    return 0;  
}  