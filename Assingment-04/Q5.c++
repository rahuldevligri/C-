/*
Write a C++ program to calculate HCF of two numbers.
*/
#include<iostream>
using namespace std;
int HCF(int,int);
int main()
{
    int n1,n2;
    cout<<"Enter a Number: ";
    cin>>n1>>n2;
    cout<<"HCF = "<<HCF(n1,n2);
}
int HCF(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
    {
         if(a%H==0 && b%H==0)
            break;
    }     
return H;
}