/*
Write a C++ program to print first N natural numbers.
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
        cout<<"Enter a Number: ";
        cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
}