/*
Write a C++ program to check whether a given year is a leap
year or not.
*/
#include<iostream>

using namespace std;

int main()
{
    int y;
    cout<<"Enter a Year "; //predefined Object Output stream << insertion operator
    cin>>y;  //predefined Object Input stream  >> Extraction operator
   
   if(y%4)
    cout<<"Not a Leap Year";
   else if(y%100)
    cout<<"Leap Year";
   else if(y%400)
     cout<<"Not a Leap Year";
   else
     cout<<"Leap Year";  
             
}