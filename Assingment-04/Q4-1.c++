/*
Write a C++ program to calculate LCM of two numbers.
*/
#include<iostream>
using namespace std;
int lcm(int,int);
int main()
{
    int n1,n2;
    cout<<"Enter a Number: ";
    cin>>n1>>n2;
    cout<<"LCM = "<<lcm(n1,n2);

}
int lcm(int a,int b)
{
    int l;
    for(l=1;l<=a*b;l++)
    {
         if(l%a==0 && l%b==0)
            break;
    }     
return l;
}