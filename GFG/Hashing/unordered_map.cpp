
// #include<iostream>
// #include<bits/std:c++>
// using namespace std;
// int main(){

// unordered_map<string,int>m;
// m["gfg"] = 20;
// m["abd"]=70;
// m.insert({"fuck",69});

// for(auto x:m)
// {
//     cout<<x.first<<" "<<x.second<<endl;
// }

// if(m.find("abd")!=m.end())
// cout << "found";
// else 
// cout<<"not found"<<endl;

// auto it = m.find("abd");
// if(it != m.end())
//  {
//     cout <<(it->second)<< endl ;
//  }
// else
//   cout<<"not found"<<endl;



// }
vector<int> twoSum(vector<int>& nums, int target) {

    //     vector<int>temp;
    //   sort(nums.begin(),nums.end());
    //   int j = nums.size()-1;
    //   int i =0;
      
    //   while(i<j){ 
    //       long long sum=nums[i]*1ll+nums[j]*1ll;
    //      if(sum==target)
    //        {
    //            temp.push_back(i);
    //            temp.push_back(j);
    //        }
    //        else if(sum<target)
    //         {
    //             i++;
    //         }
    //         else
    //           j--;
    //   } 
    //     return temp;
    vector<int>temp;
    unordered_set<int>s;
    for(int i = 0;i<nums.size();i++)
    {
        auto it=s.find(target-nums[i]);
      if(it != s.end())
      {
          int t=it-nums.begin();
          return {t,i};
      }
       else
         s.insert(nums[i]);
    }
    return {};


    }
#include<iostream>
#include<vector>
using namespace std;
{
    vector<int>nums;
    for(int i=0;i<5;i++)
    {
        int t;
        cin>>t;
        nums.push_back(t);
    }
}