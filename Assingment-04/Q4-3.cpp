#include<iostream>
using namespace std;
int lcm(int);
int main()
{
    int n1,n2;
    cout<<"Enter a Number: ";
    cin>>n1>>n2;
    lcm(n1);
    lcm(n2);
    cout<<"LCM = "<<n1*n2;

}
int lcm(int n)
{
    int x=1,c=0,i=2;

    while(n>0)
    {
        if(n%i==0)
        {
            x*=i;
            cout<<x<<endl;
        }
         else
            i++;

        n=n/i;
        
    }
return x;
}