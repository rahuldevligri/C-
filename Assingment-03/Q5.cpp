/*
Write a C++ program to calculate sum of first N natural
numbers.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,c=0;
        cout<<"Enter a Number: ";
        cin>>n;
    for(int i=1;i<=n;i++)
    {
        c+=i;
    }
    cout<<"Sum of first "<<n<<" Natural Number is "<<c;
}