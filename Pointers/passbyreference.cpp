// #include<iostream>
// using namespace std;
// void swap(int *p1, int *p2)
// {
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
// }
// int main(){
//     int a=1,b=2;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
// }

// PASS BY ALIAS

// #include<iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=1,b=2;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }

#include<iostream>
using namespace std;
void digit(int n, int &fd, int &ld)
{
    ld=n%10;
    while(n>9)
    {
        n=n/10;
    }
    fd=n;
}
int main()
{
    cout<<"enter a number : ";
    int n,fd,ld;
    cin>>n;
    digit(n,fd,ld);
    cout<<" first digit = "<<fd<<endl;
    cout<<" last digit = "<<ld;
}
