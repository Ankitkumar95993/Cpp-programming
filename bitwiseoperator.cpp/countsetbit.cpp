#include <iostream>
using namespace std;

int setbits(u_int32_t n)
{
    int count = 0;
    while (n != 0)
    {
        if (n&1)
        {
            count++;
        }

        n = n >> 1;
    }
    return count;
}

int main()
{
 u_int32_t n;
cin >> n;

    cout << "no of set bits are " << setbits(n)<<endl;
}