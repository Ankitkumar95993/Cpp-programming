#include<iostream>
using namespace std;

void allDivisor(int n){

    //  time complexity O(n);


    //  for(int i = 1; i<=n; i++)
    //  {
    //     if(n%i==0)
    //     {
    //         cout<<i<<" ";
    //     }
    //  }


    // more efficient way
    // time complexity 0(root n)

    //  for(int i = 1;i*i<=n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<i<<" ";

    //         if(i!=n/i)
    //         cout<<n/i<<" ";
    //     }
    

    // for printing in sorted form

    int i;
    for( i = 1; i*i<n; i++)
    {
       if(n%i==0)
         cout<<i<<" ";
    }

    for( ; i>=1; i--)
    {
        if(n%i==0)
        cout<<n/i<<" ";
    }
     
}

int main(){

allDivisor(15);
}