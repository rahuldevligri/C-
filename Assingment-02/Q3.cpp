/*
Write a C++ program to check whether a given number is a
valid octal number or not.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,x=0,p=0;
    cout<<"Enter a Number "; //predefined Object Output stream << insertion operator
    cin>>n;  //predefined Object Input stream  >> Extraction operator
    
    while(1)
    {
        x = (n%10);
      if(x<=7 ||x>=0);
    else
        p++;    
        break;
    }
    if(p>0)
        cout<<p<<" not";
    else
        cout<<" Yes";
getch();
}
