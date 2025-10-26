#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& nums)
{
    for(int i=0;i,nums.size();i++)
    {
        cout<<nums.at(i)<<" ";
    }
    return;
}
void reversePart(int i,int j,vector<int>& nums)
{
    int temp;
    while(i<=j)
    {
        temp=nums.at(i);
        nums.at(i)=nums.at(j);
        nums.at(j)=temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int k;
    cout<<"enter k : ";
    cin>>k;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    int n=nums.size();
    if(k>n)
    k=k%n;
    reversePart(0,5-k-1,nums);
    reversePart(5-k,4,nums);
    reversePart(0,n-1,nums);
    display(nums);
    
}