/*
1. Write a C++ program to check whether a given number is
prime or not.
*/
#include<iostream>

using namespace std;

int main()
{
    int n,i=0,c=0,d=0;
        cout<<"Enter a Number: ";
        cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i);
        else
            break;
    }
    if(n==i)
        cout<<"Prime";
      else
        cout<<"Isn't Prime";
}
