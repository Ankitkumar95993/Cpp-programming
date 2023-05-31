#include<iostream>
using namespace std;

int printPowerSet(string s)
{
    int n = s.length();
    int size = 1<<n;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        for(int j = 0; j<n; j++)
        {
            if((i & (1<<j))!=0)
            {
                cout<< s[j] <<" ";
            }
        }
        cout<<("\n");
    }
}

int main(){
  
  string s = "abc";
  printPowerSet(s);

}