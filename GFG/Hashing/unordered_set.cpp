#include<iostream>
#include<unordered_set>
using namespace std;


int main(){

    unordered_set<int>s;
    s.insert(4);
    s.insert(67);
    s.insert(54);
    s.insert(15);

    for(auto it = s.begin(); it != s.end();it++)
    {
      cout<<(*it)<<" ";
    }
    cout<<endl;
    cout<<s.size()<<" ";
    // s.clear();
    // cout<<s.size()<<" ";

    if(s.find(54)==s.end())
     cout<<"not found";
     else
      cout<<"found"<<*(s.find(54))<<endl;
    s.erase(54);
    cout<<endl;

    if(s.find(54)==s.end())
     cout<<"not found";
     else
      cout<<"found"<<*(s.find(15));

    cout<<endl;

    if(s.count(15))
      cout<<"found";
    else 
      cout<<"not found";
    

    // // for( auto it = s.begin(); it = s.end();it++)
    // //   cout<<(*it)<<" ";
    // // cout<<endl;
    // // cout<<s.size()<<" ";
    // // s.clear();
    // // cout<<s.size()<<" ";

    // // if(s.find(54)==s.end())
    // //   cout<<"not found";
    // // else
    // //   cout<<"found"<<*(s.find(54));

    //   cout<<s.size()<<endl;
    //   s.erase(67);
    //   cout<<s.size()<<endl;
    //   auto it = s.find(23);
    //   s.erase(it);
    //   cout<<s.size()<<endl;

    //   s.erase(s.begin(),s.end());
    //   cout<<s.size()<<endl;
    
}