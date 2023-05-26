#include<iostream>
using namespace std;

int trailingZerosInFactorial(int n)
{
    // naive approach
  // timecomplexity 0(n);
   // space complexity 0(n);


    // int res = 1;
    // int count = 0;

    // for(int i = 2; i<=n ; i++)
    // {
    //     res = res*i;
    // }

    // while(res%10 == 0)
    // {
    //     count++;
    //     res = res/10;
    // }
    // return count;


    // efficient approach
    // time complexity 0(logn)
    // auxiliary space complexity 0(1);

    int res = 0;
    int i;
    for(  i = 5; i<=n; i=i*5)
    {
     res = res + n/i;
    }

    return res;


}


int main(){

  cout<<trailingZerosInFactorial(251)<<endl;

}