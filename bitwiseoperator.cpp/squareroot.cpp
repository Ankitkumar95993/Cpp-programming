#include <iostream>
using namespace std;

int expo(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)//odd
        {
            res = res * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return res;
}

int main()
{

   cout<<expo(2,3)<<endl;
}