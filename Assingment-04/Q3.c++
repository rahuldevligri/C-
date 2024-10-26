/*
Write a C++ program to print first N terms of Fibonacci
series. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
*/
#include<iostream>

using namespace std;

int main()
{
    int n,a=-1,i=0,b=1,c;
        cout<<"Enter a Number: ";
        cin>>n;
    while(i<n)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c;
    i++;
    }
}
