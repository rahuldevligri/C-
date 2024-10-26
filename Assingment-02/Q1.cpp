/*
1. Write a C++ program to check whether a given number is
divisible by 7 or not.
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number "; //predefined Object Output stream << insertion operator
    cin>>n;  //predefined Object Input stream  >> Extraction operator

    if(n%7)
        cout<<n <<" is not divisible by 7";
    else
        cout<<n <<" is divisible by 7";
getch();
}
