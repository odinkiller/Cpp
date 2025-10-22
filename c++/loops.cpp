// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter number of times to be printed : ";
//     int n;
//     cin>>n;
//     int i;
//     for(i=1;i<=n;i++)
//     {
//         cout<<"Hello World"<<endl;
//     }
//     cout<<i;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=100;i++)
//     {
//         if(i%2==0) cout<<i<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         int n = 19 * i;
//         cout<<"19 * "<<i<<" = "<<n<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter no. of terms : ";
//     cin>>n;
//     // for(int i = 1; i <= 2*n-1; i += 2)
//     // {
//     //     cout<<i<<" ";
//     // }
//     int a=4;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<a<<" ";
//         a=a+3;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no. of terms : ";
//     int n;
//     cin>>n;
//     int a = 1;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<a<<" ";
//         a=a*2;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of terms : ";
//     int n;
//     cin>>n;
//     int a = 100;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<a<<" "<<endl;
//         a=a-3;
//         if(a<=0) 
//         {
//             cout<<"no. of terms exceed given condition, only positive numbers are displayed";
//             break;
//         }
//     }

// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     while(i<=10)
//     {
//         cout<<i<<endl;
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     do
//     {
//         cout<<i<<endl;
//         i++;
//     } 
//     while (i<1);
    
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=65;i<=90;i++)
//     {
//         cout<<(char)i<<" : "<<i<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a number : ";
//     int n;
//     bool flag=true;
//     cin>>n;
//     for(int i=2; i<=n-1; i++)
//     {
//         if(n%i==0)
//         {
//             flag=false;
//             break;
//         }
//     }
//     if (n==1) cout<<"1 is neither prime nor composite";
//     else if(flag==true) cout<<n<< " is prime";
//     else cout<<n<<" is composite";
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         if(i%2==0) continue;
//         cout<<i<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;
//     int c=0;
//     int r=n;
//     for(int i=1; ; i++)
//     {
//         if(r!=0)
//         {
//             r=r/10;
//             c++;
//         }
//         else break;

//     }
//     cout<<"no. of digits = "<<c;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;
//     int r=n;
//     int c=0;
//     while(n>0)
//     {
//         n=n/10;
//         c++;
//     }
    
//     if(r==0) cout<<"no. of digits = 1";
//     else cout<<"no. of digits = "<<c;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;
//     int r=n,c=0,rem;
//     while(n!=0)
//     {
//         rem=n%10;
//         c=c+rem;
//         n=n/10;
//     }
//     if(r==0) cout<<"sum = 0";
//     else cout<<"sum = "<<c;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;
//     int r=0,lsd=0;
//     while(n>0)
//     {
//         r=r*10;
//         lsd=n%10;
//         r=r+lsd;
//         n=n/10;
//     }
//     cout<<r;

// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;
//     int a=0;
//     for(int i=1; i<=n; i++)
//     {
//         if(i%2==0) a-=i;
//         else a+=i;
//     }
//     cout<<"sun of series = "<<a;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a number : ";
//     int n,f=1;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         f*=i;
//         cout<<i<<"! = "<<f<<endl;
//     }

// }
 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=1,b=1;
//     cout<<"enter a number : ";
//     int n,s=0;
//     cin>>n;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1; i<=n ; i++)
//     {
//         s=a+b;
//         a=b;
//         b=s;
//         cout<<s<<" ";
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     float n,p;
//     cout<<"enter base : ";
//     cin>>n;
//     cout<<"enter exponent : ";
//     cin>>p;
//     float a=1;
//     if(p>=0)
//     {
//         for(int i=1; i<=p; i++)
//         {
//             a*=n;
//         }   
//     }
//     else
//     for(int i=1; i<=-p; i++)
//     {
//         a*=1/n;
//     }
//     cout<<a;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no. of rows : ";
//     int r;
//     cin>>r;
//     cout<<"enter no. of columns : ";
//     int c;
//     cin>>c;
//     for(int i=1; i<=r; i++)
//     {
//         for(int j=1; j<=c; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no. of rows : ";
//     int r;
//     cin>>r;
//     for(int i=1; i<=r; i++)
//     {
//         int a=1;
//         for(int j=1; j<=i; j++)
//         {
//             cout<<a;
//             a+=2;
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter row : ";
//     int r;
//     cin>>r;
//     cout<<"enter column : ";
//     int c;
//     cin>>c;
//     for(int i=1; i<=r; i++)
//     {
//         for(int j=1; j<=c; j++)
//         {
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of rows and columns";
//     int n;
//     cin>>n;
//     int mid=n/2+1;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=n; j++)
//         {
//             if(j==i || j==n-i+1) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of rows : ";
//     int r;
//     cin>>r;
//     int c=r*2-1;
//     for(int i=1; i<=r; i++)
//     {
//         for(int j=1; j<=c; j++)
//         {
//             if(j>c/2+1-i && j<c/2+1+i) cout<<"*";
//             else cout<<" ";    
//         }
//         cout<<endl;
//     }

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of rows : ";
//     int n;
//     cin>>n;
//     int a=1;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of rows : ";
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             if((i+j)%2==0) cout<<"1"<<" ";
//             else cout<<"0"<<" ";
//         }
//         cout<<endl;
//     }
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of rows : ";
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         int a=1;
//         for(int j=1; j<=n; j++)
//         {
//             if(j>n-i)
//             {
//                 cout<<a;
//                 a++;
//             }
//             else cout<<" ";
//         }

//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of rows : ";
//     int r;
//     cin>>r;
//     for(int i=1; i<=r; i++)
//     {
//         for(int j=1; j<=r-i; j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=r; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//  #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of rows : ";
//     int r;
//     cin>>r;
//     for(int i=1; i<=r; i++)
//     {
//         for(int j=1; j<=r-i; j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=i*2-1; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//  #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of rows : ";
//     int r;
//     cin>>r;
//     for(int i=1; i<=r; i++)
//     {
//         for(int j=1; j<=r-i; j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=i; k++)
//         {
//             cout<<k;
//         }
//         for(int q=i-1; q>=1; q--)
//         {
//             cout<<q;
//         }
//         cout<<endl;
//     }
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter no of lines : ";
//     int n;
//     cin>>n;
//     for(int i=1; i<=n/2+1; i++)
//     {
//         for(int j=1; j<=n-i; j++)
//         {
//             cout<<" ";  
//         }
//         for(int k=1; k<=2*i-1; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int a=n/2+2; a>=1; a--)
//     {
//         for(int b=1; b<=n-a; b++)
//         {
//             cout<<" ";  
//         }
//         for(int c=1; c<=2*a-1; c++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<("enter no. of rows :");
//     int n;
//     cin>>n;
//     int nsp=0, nst=2*n-1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=nst;j++)
//         {
//             if(j>nst/2+1-nsp && j<nst/2+1+nsp)
//             cout<<(" ");
//             else
//             cout<<("*");
//         }
//         nsp+=1;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<("enter no. of rows :");
//     int n;
//     cin>>n;
//     int nsp=0, nst=2*n-1,m=1;
//     for(int i=1;i<=n;i++)
//     {
//         int m=1;
//         for(int j=1;j<=nst;j++)
//         {
//             if(j>nst/2+1-nsp && j<nst/2+1+nsp)
//             cout<<(" ");
//             else
//             cout<<m;
//             m++;
//         }
//         nsp+=1;
//         cout<<endl;
//     }
// }