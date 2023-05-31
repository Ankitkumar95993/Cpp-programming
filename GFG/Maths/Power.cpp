#include<iostream>
using namespace std;

// int calculatePower(int x, int n)
// {
//     int pow  = 1;
//     for(int i = 0; i<n; i++)
//     {
//         pow = pow*x;
//     }
//     return pow;
// }

// time complexity 0(logn), auxiliary space = 0(logn);


// int power(int x, int n)
// {
//     if(n==0)
//     return 1;

//     int temp = power(x,n/2);
//     temp = temp*temp;

//     if(n%2==0)
//     return temp;

//     else
//     return temp*x;

    
// }


//iterative solution with 0(1) auxiliary space

int power(int x,int n)
{
    int res = 1;
    while(n>0)
    {
        if(n%2!=0)  // bit is 1;
        {
            res = res*x;
        }
        x=x*x;
        n = n/2;
    }
    return res;
}


int main(){

   cout<<power(4,5); 

}