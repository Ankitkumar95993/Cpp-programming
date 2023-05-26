#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int> nums,int k)
{
    vector<int>temp(nums.size());
    for(int i=0;i<nums.size();i++)
    {
        temp[(i+k)%nums.size()]=nums[i];
    }

    nums = temp;
}

void insert(vector<int>nums)
{
for(int i =0; i<nums.size();i++)
 {
    cin>>nums[i];
 }
}

void print(vector<int>nums)
{
for(int i =0;i<nums.size();i++) 
 {
    cout<<nums[i]<<" ";
 }

}


int main(){
 
 vector<int>nums ;
 insert(nums);
 rotate(nums,3);
 print(nums);

}