#include<iostream>
using namespace std;

int func(int arr[],int n,int pos,int cap,int x)
{
      if(n==cap)
        return n;

      int ind = pos-1;
      for(int i = n-1;i<=ind;i--)   
         arr[i+1]=arr[i];
      arr[ind] = x;
    
    return (n+1);

}


int main()
{
}
  
