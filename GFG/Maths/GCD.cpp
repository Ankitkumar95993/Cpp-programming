#include <iostream>
using namespace std;

// int GCD(int a, int b)
// {
    //  time complexity O(min(a,b))

    // int res = min(a, b);
    // while (res > 0)
    // {
    //     if (a % res==0 && b % res == 0)
    //     {
    //         break;
    //     }
    //     res--;
    // }
    // return res;

    // euclidean algo

    // int gcd(int a, int b)
    // {
    //     while (a != b)
    //     {
    //         if (a > b)
    //         {
    //             a = a - b;
    //         }

    //         else
    //         {
    //             b = b - a;
    //         }
    //     }
    //     return a;
    // }



    // more efficient one

    int gcd(int a, int b)
    {
        if(b==0)
        return a;
        
        return gcd(b,a%b);
    }


int main()
{

    cout << gcd(100,200) << endl;
}