/*
Write a C++ program to check whether a given number is
positive, negative or zero.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n>0)
        cout<<"Positive";
   else if(n<0)
        cout<<"Negative";
   else
       cout<<"Zero";   
}         