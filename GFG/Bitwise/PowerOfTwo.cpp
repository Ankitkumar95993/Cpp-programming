#include <iostream>
using namespace std;

// time complexity  O(logn)

// bool isPower2(int n)
// {
//     if(n==0)
//      return true;

//     while(n!=1)
//     {
//          if((n%2)!= 0)
//          {
//              return false;
//          }
//          n=n/2;
//     }
//     return true;
// }

// efficinet approach

// bool isPower2(int n)
// {
//     int count = 0;
//     if(n==0)
//     return false;
//     while (n > 0)
//     {
//         n = n & (n - 1);
//         count++;
//         if (count != 1)
//             return false;
//     }
//     return true;
// }

// making it more efficient by removing loop
bool isPower2(int n)
{
    if (n == 0)
        return false;

    return ((n & (n - 1)) == 0);
}

bool isPower2(int n)
{
    return (n && (n&(n-1)) == 0);
}

int main()
{

    cout << isPower2(256);
}