/*
Write a C++ program to print all prime number between two
given numbers.
*/

#include<iostream>

using namespace std;

int main()
{
    int n,i=0,c=0,d=0;
        cout<<"Enter a Number: ";
        cin>>n;
    for(int j=2;j<=n;j++)
    {
    for(i=2;i<j;i++)
    {
        if(j%i);
        else
            break;
    }
    if(j==i)
        cout<<" "<<i;
    }
}
