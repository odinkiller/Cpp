// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(0); // pushback checks capacity and doubles it if needed to insert values
//     v[0]=44;
//     cout<<v.size()<<" "<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<v.size()<<" "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<v.size()<<" "<<v.capacity()<<endl;
//     v.push_back(8);
//     cout<<v.size()<<" "<<v.capacity()<<endl;
//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" ";
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(8);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" "<<endl;
//     }

// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     for(int i=0;i<5;i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//         cout<<v[i]<<" ";
//     }
//     cout<<v.at(2);
// }



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(1);
//     v.push_back(2);
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v.at(i)<<" ";
//     }
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void change(vector<int> &v) //passing vector is passbyvalue   
// {
//     v.at(1)=100;
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v.at(i)<<" ";
//     }
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(1);
//     v.push_back(2);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     change(v);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void twoSum(vector<int>& nums, int target) {
//     for(int i=0;i<nums.size();i++)
//     {
//         for(int j=i+1;j<nums.size();j++)
//         {
//             if(nums.at(i)+nums.at(j)==5)
//             cout<<"["<<i<<","<<j<<"]";
//         }
//     }
// }
// int main()
// {
//     int target=5;
//     vector<int> nums;
//     nums.push_back(1);
//     nums.push_back(2);
//     nums.push_back(3);
//     nums.push_back(4);
//     twoSum(nums,target);
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int> nums;
//     nums.push_back(1);
//     nums.push_back(2);
//     nums.push_back(3);
//     nums.push_back(4);
//     vector<int> v;
//     for(int i=nums.size()-1;i>=0;i--)
//     {
//         v.push_back(nums.at(i));
//     }
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v.at(i)<<" ";
//     }
// }