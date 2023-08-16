#include<iostream>
using namespace std;

bool palindrome(string str,int n)
{
    string rev = str;
    reverse(rev.begin(),rev.end());
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==rev[i])
          return true;
        else
          return false;
    }
}
int main(){

 string s = "ABBA";
 cout<<palindrome(s,s.length());

}
