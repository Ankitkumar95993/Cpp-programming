#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v)
{
    int s = 0;
    int e = v.size()-1;
    while(s<e)
    {
        swap(v[s++],v[e--]);
    }

    return v;
}

int addition(vector<int>&a , int n, vector<int>&b , int m)
{
    
}
int main(){

    
}