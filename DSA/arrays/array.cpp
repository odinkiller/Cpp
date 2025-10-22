// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8};
//     int s=sizeof(arr)/sizeof(arr[7]);
//     cout<<s;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter no of elements";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements";
//     for (int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter no. to be searched";
//     cin>>x;
//     bool flag = false; //check-mark
//     for (int i=0;i<n;i++)
//     {
//         if(arr[i]==x)
//         flag=true;
//     }
//     if(flag==true)
//     cout<<"present";
//     else
//     cout<<"absent";
    
// }

//min number from array

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     //can use INT_MIN/MAX with #include<climits> : stoes vry low value toa variable
//     int arr[]={1000,67,892,34,10};
//     int min=INT_MAX;
//     for(int i=1;i<5;i++)
//     {
//         if(min>arr[i])
//         min=arr[i];
//     }
//     cout<<min<<" is smallest"<<endl;
//     int smin=INT_MAX;
//     for(int i=1;i<5;i++)
//     {
//         if(smin>arr[i]&&arr[i]!=min)
//         smin=arr[i];
//     }
//     cout<<smin<<" is second smallest";

// }