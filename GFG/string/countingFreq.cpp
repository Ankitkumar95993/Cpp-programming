#include<iostream>
using namespace std;
char getMaxOccuringChar(string str)
    {
       int count[26] = {0};
       for(int i = 0;i<str.length();i++)
       {
          count[str[i]-'a']++;
       }
       int result = *max_element(count+0,count+26);
       return (char)(result+'a');
    }



int main(){

    string str = "geekforgeekkkkks";
    // int count[26] = {};
    // for(int i = 0;i<str.length();i++)
    // {
    //      count[str[i]-'a']++;
    // }
    // for(int i = 0;i<26;i++)
    //  {
    //     if(count[i]>0)
    //       cout<<(char)(i+'a')<<" "<<count[i]<<endl;
    //  }

   cout<<getMaxOccuringChar(str);

}