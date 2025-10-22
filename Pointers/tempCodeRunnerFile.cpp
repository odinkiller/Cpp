#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int *p=&x;
    int **p2=&p;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    **p2=6;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

}