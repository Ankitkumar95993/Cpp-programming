#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<char>s;
    string str;
    cin>>str;
    
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";
    while(!s.empty()){
       char ch = s.top();
       ans.push_back(ch);
       s.pop();
    }
    
    for (int i = 0; i < ans.length(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    

    return 0;
}