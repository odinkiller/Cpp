#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& x)
{
    for(int i=0;i<x.size();i++)
    {
        cout<<x.at(i)<<" ";
    }
    return;
}
int main()
{
    vector<int> v;
    vector<int> x;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    for(int i=1;i<v.size();i++)
    {
        int c=0;
        for(int j=0;j<i;j++)
        {
            if(v.at(j)>v.at(j+1))
            c=j;
        }
        x.push_back(c);
    }
    display(x);
}