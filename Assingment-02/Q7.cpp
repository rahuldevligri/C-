/*
Write a C++ program to check whether a given number is
even or odd.
*/
#include<iostream>
#include<conio.h>

using namespace std;
inline void oddeven(int);
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    oddeven(n);  
}         
void oddeven(int n)
{
    if(n%2)
        cout<<"odd";
    else
        cout<<"even";    
}