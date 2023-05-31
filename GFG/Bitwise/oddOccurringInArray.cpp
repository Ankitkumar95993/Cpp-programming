#include <iostream>
using namespace std;

int oneOddOccurringNo(int arr[], int n)
{
    // time complexity O(n2)

    for(int i = 0 ; i<n ;i++)
    {
        int count=0;
        for(int j = 0 ; j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }

        if(count%2 != 0)
         return arr[i];

    }

    // better approach of bitwise XOR

//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         res = res ^ arr[i];
//     }
//     return res;
}





int main()
{

    int arr[] = {4, 4, 4, 4, 5,5,5,5,5};
    cout << oneOddOccurringNo(arr, 9);
}