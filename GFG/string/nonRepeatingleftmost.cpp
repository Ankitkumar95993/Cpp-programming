#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;




int nonRepeatLeftMost(string s)
{

    // efficient approach
        //int CHAR = 256;
        // vector<int>count(CHAR,0);
        // for(int i=0; i<S.length(); i++)
        // {
        //      count[S[i]]++;
             
        // }
        // for(int i = 0;i<S.length();i++)
        // {
        //     if(count[S[i]]==1)
        //       return S[i];
        // }
        // return '$';


//more efficicent approach

    int CHAR = 256;
    // Create a count array to store the frequency of characters.
    vector<int >count(CHAR,-1);

    for(int i = 0;i<s.length();i++)
    {
        if(count[s[i]]==-1)
           count[s[i]] = i;
        else
          count[s[i]] = -2;  
    }

    int res = INT_MAX;
    for(int i = 0; i<CHAR ;i++)
    {
        if(count[i]>=0)
         res = min(res,count[i]);
    }
    return (res==INT_MAX ? -1 : res);
}

int main(){

    string str = "iabbcbda";
    cout<<nonRepeatLeftMost(str)<<endl;;
}