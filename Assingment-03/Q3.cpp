/*
Write a C++ program to print first N even natural numbers.
*/

#include<iostream>

using namespace std;

int main()
{
    int n,x=0;
        cout<<"Enter a Number: ";
        cin>>n;
    for(int i=1;i<=(n*2);i++)
    {
        if(i%2==0)
           cout<<i<<endl;
    }
}