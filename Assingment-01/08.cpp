/* 8. Write a C++ program to swap values of two int variables. */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"Enter Two Numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<"Before Swap a="<<a<<" and b="<<b;
    // xor operator convert desimal to binary.
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"\n After Swap a="<<a<<" and b="<<b;

}
