/*
Write a C++ program to print table of user’s choice.
*/
#include<iostream>

using namespace std;

int main()
{
    int n;
        cout<<"Enter a Number: ";
        cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" X "<<i<<" = "<<(n*i)<<endl;
    }
}