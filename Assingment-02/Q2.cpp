/*
2. Write a C++ program to check whether a triangle is right
angled triangle or not. Takes lengths of the sides from the
user.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int hyp,perp,base;
    cout<<"Enter Lenght of Hypotenuse: "; //predefined Object Output stream << insertion operator
    cin>>hyp;  //predefined Object Input stream  >> Extraction operator
    cout<<"Enter Lenght of Perpendicular: "; 
    cin>>perp;
    cout<<"Enter Lenght of Base: "; 
    cin>>base;
    int pb = (perp*perp)+(base*base);
    int h = (hyp*hyp);
    if(pb==h)
        cout<<"Triangle is right angle Triangle";
    else
        cout<<"Triangle isn't right angle Triangle";
getch();
}
