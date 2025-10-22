// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter an integer : ";
//     int n;
//     cin>>n;
//     if(n>=0)
//     {
//         cout<<n;
//     }
//     else
//     {
//         n=-n;
//         cout<<n;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter cost price : ";
//     int cp;
//     cin>>cp;
//     cout<<"enter selling price : ";
//     int sp;
//     cin>>sp;
//     int p,l;
//     if(cp<sp)
//     {
//         p = sp - cp;
//         cout<<"profit = "<<p;
//     }
//     else if(cp>sp)
//     {
//         l = cp - sp;
//         cout<<"loss = "<<l;
//     }
//     else
//     {
//         cout<<"no profit or loss";
//     }

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a number";
//     int n;
//     cin>>n;
//     if(n>99 && n<1000)
//     {
//         cout<<"3 digit number";
//     }
//     else
//     {
//         cout<<"not a 3 digit number";
//     }
// }


//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;
//     if(n%3==0 || n%5==0)
//     {
//         cout<<"number is divisible by 3 or 5";
//     }
//     else{
//         cout<<"number is not divisible by 3 or 5";
//     }
//  }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"emter 3 numbers : ";
//     int a, b, c;
//     cin>>a>>b>>c;
//     if(a>b && a>c)
//     {
//         cout<<a<<" is the largest number";
//     }
//     else if(b>a && b>c)
//     {
//         cout<<b<<" is the largest number";
//     }
//     else
//     {
//         cout<<c<<" is the largest number";
//     }

// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a character : ";
//     char ch;
//     cin>>ch;
//     if(((int)ch>=65 && (int)ch<=90) || ((int)ch>=97 && (int)ch<=122)) 
//     {
//         cout<<ch<<" is an alphabet";
//     }
//     else
//     {
//         cout<<ch<<" is not an alphabet";
//     }
// }


// #include<iostream>
// using namespace std;
// int main ()
// {
//     cout<<"enter a positive number : ";
//     int n;
//     cin>>n;
//     if(n%3==0 || n%5==0)
//     {
//         if(n%15!=0)
//         {
//             cout<<"the number is divisible by 3 or 5 but not 15";
//         }
//         else 
//         {
//             cout<<"the number is divisible by 15";
//         }
//     }
//     else
//     {
//         cout<<"the number is not divisible by 3 or 5";
//     }
    
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter marks out of 100 : ";
//     int m;
//     cin>>m;
//     if(m>=91)
//     {
//         cout<<"excellent";
//     }
//     else if(m>=81)
//     {
//         cout<<"very good";
//     }
//     else if(m>=71)
//     {
//         cout<<"good";
//     }
//     else if(m>=61)
//     {
//         cout<<"can do better";
//     }
//     else if(m>=51)
//     {
//         cout<<"Average";
//     }
//     else if(m>=41)
//     {
//         cout<<"Below Average";
//     }
//     else
//     {
//         cout<<"fail";
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter a character : ";
//     char ch;
//     cin>>ch;
//     int a;
//     a = (int)ch;
//     if(a>=65 && a<=90 || a>=97 && a<=122)
//     {
//         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' ||ch=='E' || ch=='I' ||ch=='O'||ch=='U')
//         {
//             cout<<ch<<" is a vowel";
//         }
//         else
//         {
//             cout<<ch<<" is a consonent";
//         }
//     }
//     else{
//         cout<<ch<<" is not an alphabet";
//     }
// }


// #include<iostream>
// using namespace std;
// int main ()
// {
//     cout<<"enter 1st number : ";
//     int a;
//     cin>>a;
//     cout<<"enter 2nd number : ";
//     int b;
//     cin>>b;
//     cout<<"enter 3rd number : ";
//     int c;
//     cin>>c;
//     if((a+b>c) && (b+c>a) && (c+a>b))
//     {
//         cout<<"can be sides of a triangle";
//     }
//     else{
//         cout<<"cannot be sides of a triangle";
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     (a%2==0)? cout<<"even" : cout<<"odd";
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter marks : ";
//     int m;
//     cin>>m;
//     (m>33)? cout<<"pass" : cout<<"fail";

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter day number : ";
//     int x;
//     cin>>x;
//     switch(x)
//     {
//         case 1:
//         cout<<"Monday";
//         break;
//         case 2:
//         cout<<"Tuesday";
//         break;
//         case 3:
//         cout<<"Wednesday";
//         break;
//         case 4:
//         cout<<"Thursday";
//         break;
//         case 5:
//         cout<<"Friday";
//         break;
//         case 6:
//         cout<<"Saturday";
//         break;
//         case 7:
//         cout<<"Sunday";
//         break;
//         default:
//         cout<<"invalid number";
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     float a,b;
//     int x;
//     cout<<"enter first number : ";
//     cin>>a;
//     cout<<"enter second number : ";
//     cin>>b;
//     cout<<"For ADDITION press 1"<<endl;
//     cout<<"for SUBSTRACTION press 2"<<endl;
//     cout<<"For MULTIPLICATION press 3"<<endl;
//     cout<<"For DIVISION press 4"<<endl;
//     cin>>x;
//     switch(x)
//     {
//         case 1:
//         cout<<a+b;
//         break;
//         case 2:
//         cout<<a-b;
//         break;
//         case 3:
//         cout<<a*b;
//         break;
//         case 4:
//         cout<<a/b;
//         break;
//         default:
//         cout<<"invalid number";

//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     float a,b;
//     char ch;
//     cout<<"enter the problem : ";
//     cin>>a>>ch>>b;
//     switch(ch)
//     {
//         case '+':
//         cout<<a+b;
//         break;
//         case '-':
//         cout<<a-b;
//         break;
//         case '*':
//         cout<<a*b;
//         break;
//         case '/':
//         cout<<a/b;
//         break;

//     }
// }



