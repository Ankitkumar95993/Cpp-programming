#include <iostream>
using namespace std;

// bool checkSetBit(int n, int k)
// {
//     for (int i = 0; i < k-1; i++)
//     {   n = n/2;

//        if (n % 2 != 0) // bit is 1
//             return true;

//     }
//     return false;
// }

// bool checkSetBit(int n, int k)
// {
//     if((n&(1<<(k-1)))!=0)
//      {return true;}
//      else
//      {return false;}
// }


bool checkSetBit(int n, int k)
{
    int x = n>>(k-1);
    if(x&1 != 0)
    {
        return true;
    }
    else 
    return false;
}


int main()
{
    cout<<checkSetBit(8,2);
}