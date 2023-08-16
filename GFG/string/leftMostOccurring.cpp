#include<iostream>
#include<algorithm>
using namespace std;

int leftmostRepeatingChar(string s1)
{
    sort(s1.begin(),s1.end());
    for(int i = 1; i<s1.length();i++)
    {
       if(s1[i]==s1[i-1])
        return (i-1);
    }
   return -1; 
 
}


int leftmost(string s)
     { 
        int CHAR=256;
        bool visited[CHAR];
        fill(visited,visited+CHAR,false);
        int res = -1;
        for(int i = s.length()-1;i>=0;i-- )
        {
           if(visited[s[i]])
              res = i;
            else 
               visited[s[i]] = true;
        }
        return res;
        
     }



int main(){


    cout<<leftmost("abccbd");
     

     


}