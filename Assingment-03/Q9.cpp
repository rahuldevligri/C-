/*
Write a C++ program to count digits in a given number.
*/

#include<iostream>

using namespace std;

int main()
{
       int n,c=0;
        cout<<"Enter a Number: ";
        cin>>n; //123
        int x;
    while(n!=0)
    {
        x=n%10; //  3
        //cout<<"x="<<x<<endl;
        n=n/10; // 12
        //cout<<"n="<<n<<endl;
          c++;
    }
    cout<<c;
}