/*
Write a C++ program to find the greater among 3 given
numbers.
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three Numbers: "; //predefined Object Output stream << insertion operator
    cin>>a>>b>>c;  //predefined Object Input stream  >> Extraction operator

    if(a>b)
    {
      if(a>c)
        cout<<a;
      else
        cout<<c;  
    }
    else
    {
        if(b>c)
            cout<<b;
        else
            cout<<c;
    }
getch();
}
