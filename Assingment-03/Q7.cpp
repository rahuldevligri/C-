/*
Write a C++ program to calculate sum of squares of first N
natural numbers.
*/
#include<iostream>

using namespace std;

int main()
{
    int n,c=0;
        cout<<"Enter a Number: ";
        cin>>n;
    for(int i=1;i<=n;i++)
    {
        c+=i*i;
    }
    cout<<"Sum of squares of first "<<n<<" Natural Number is "<<c;
}