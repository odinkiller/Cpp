#include<iostream>
using namespace std;
int main()
{
   float x;
   cout<<"enter number";
   cin>>x;
   int a = (int)x;
   if(a<0) a = a - 1;
   float y = x - a;
   cout<<"fractional part = "<<y;
}