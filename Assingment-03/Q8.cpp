/*
Write a C++ program to calculate factorial of a number.
*/
#include<iostream>

using namespace std;

int main()
{
    int n,f=1;
        cout<<"Enter a Number: ";
        cin>>n;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<"factorial of "<<n<<" is "<<f;
}