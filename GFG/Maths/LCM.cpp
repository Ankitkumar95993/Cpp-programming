#include<iostream>
using namespace std;

// naive approach, complexity O(a*b-max(a,b));

// int lcm(int a, int b)
// {
//     int res = max(a,b);
//     while(true)
//     {
//         if(res%a==0 && res%b==0)
//         {
//             break;
//         }
//         res++;
//     }
//     return res;
// }


int gcd(int a , int b)
{
    if(b==0)
     return a;

    return gcd(b,a%b);

}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}

int main(){
    cout<<lcm(7,3)<<endl;

}