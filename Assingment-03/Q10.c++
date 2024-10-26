/*
Write a C++ program to calculate the sum of digits in a
given number.
*/
#include<iostream>

using namespace std;

int main()
{
       int n,c=0,x;
        cout<<"Enter a Number: ";
        cin>>n;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
          c+=x;
    }
    cout<<"sum of digits: "<<c;
}