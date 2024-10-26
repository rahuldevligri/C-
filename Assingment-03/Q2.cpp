/*
Write a C++ program to print first N natural numbers in
reverse order.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
        cout<<"Enter a Number: ";
        cin>>n;
    for(int i=n;i>0;i--)
    {
        cout<<i<<endl;
    }
}