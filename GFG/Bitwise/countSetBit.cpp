#include<iostream>
using namespace std;

int countSetBit(int n)
{
    // int count = 0;
    // while(n>0)
    // {
    //     count = count + (n&1);
    //     n=n/2;
    // }
    // return count;

    // making it more efficient, by just counting the set bit

    int count = 0;
    while(n>0)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    cout<<countSetBit(7);

}