// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int* ptr=arr; // or &arr[0] // stores address of first element of array // or &arr[0]
//     cout<<ptr<<endl;
//     cout<<&arr[0]<<endl;
//     cout<<*ptr<<endl;
//     for(int i=0;i<5;i++)
//     {
//         cout<<ptr[i]; //ptr can be used as the array itself
//     }
//     cout<<endl;
//     for(int i=0;i<5;i++)
//     {
//         cout<<*ptr;
//         ptr++; // shifts pointer to the address of the next element of the array
//     }
//     cout<<endl;
//     ptr=arr;
//     *ptr=9; // array elements can be updated like this
//     ptr++;
//     *ptr=8;
//     ptr--;
//     for(int i=0;i<5;i++)
//     {
//         cout<<*ptr;
//         ptr++;
//     }
//     cout<<endl;
// }