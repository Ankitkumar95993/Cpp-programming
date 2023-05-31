#include <iostream>
using namespace std;

// void twoOddOccurring(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//                 count++;
//         }
//         if (count % 2 != 0)
//             cout << arr[i] << " ";
//     }
// }

// efficient approach
void twoOddOccurring(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = res ^ arr[i];
    }

    int k = (res &(~(res-1)));

    int res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & k)  != 0)
        {
            res1 = res1^arr[i];
        }

        else{
            res2 = res2^arr[i];
        }
    }
    cout<<res1<<" "<<res2;
}



// making it more easier 

// void twoOddOccurring(int arr[], int n)
// {
//     // int res = arr[0];
//     // for (int i = 1; i < n; i++)
//     // {
//     //     res = res ^ arr[i];
//     // }

//     // int k = (res &(~(res-1)));

//     int res1 = 0, res2 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i] & 1)  != 0)
//         {
//             res1 = res1^arr[i];
//         }

//         else{
//             res2 = res2^arr[i];
//         }
//     }
//     cout<<res1<<" "<<res2;
// }


int main()
{
    int arr[] = {3,4,3,4,5,4,4,6,7,7};
    twoOddOccurring(arr,10);
}