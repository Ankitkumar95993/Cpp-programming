#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    int res = min(a, b);

    while (res > 0)
    {
        if (a % res==0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

int main()
{

    cout << GCD(13, 7) << endl;
}