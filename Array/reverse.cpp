#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int>v)
{
    int s=0;
    int e = v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void takeinput(vector<int>v)
{
    for(int i =0; i < v.size();i++)
    {
        cin>>v[i];
    }
}

void print(vector<int>v){

for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}cout<<endl;

} 

int main(){
    vector<int>v;  
    takeinput(v);
    vector<int> ans = reverse(v);
    print(ans);


    

}