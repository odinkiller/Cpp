// #include<iostream>
// using namespace std;
// void greetings()
// {
//     cout<<"hi"<<endl;
//     cout<<"good morning"<<endl;
// }
// int main()
// {
//     greetings();
//     greetings();
// }

// #include<iostream>
// using namespace std;
// int greetings(int a)
// {
//     a=a*2;
//     cout<<a<<endl;
//     return a;
// }
// int main()
// {
//     int a=1;
//     cout<<a<<endl;
//     cout<<greetings(a);
// }


// PASCAL'S TRIANGLE

// #include<iostream>
// using namespace std;
// int fac(int x)
// {
//     int f=1;
//     for(int a=1;a<=x;a++)
//     f*=a;
//     return f;
// }
// int comb(int nf, int rf, int nrf)
// {
//     int c=fac(nf)/(fac(rf)*fac(nrf));
//     return c;
// }
// int main()
// {
//     int r;
//     cout<<"enter no. of rows : ";
//     cin>>r;
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<comb(i,j,i-j)<<" ";
//         }
//         cout<<endl;
//     }

// }

// GCD

// #include<iostream>
// using namespace std;
// int hcf(int a, int b)
// {
//     for(int i=min(a,b);i>=1;i--)
//     {
//         if (a%i==0 && b%i==0)
//         return i;
//     }
// }
// int main()
// {
//     int a;
//     cout<<"enter 1st number : ";
//     cin>>a;
//     int b;
//     cout<<"enter 2nd number : ";
//     cin>>b;
//     cout<<hcf(a,b);
// }

// FACTORIL OF N NUMBERS

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++)
//     {
//         a*=i;
//         cout<<a<<endl;
//     }
// }

// SWAP

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<a<<" "<<b;
// }