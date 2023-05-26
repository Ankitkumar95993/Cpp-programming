#include <iostream>

using namespace std;

// int getLargest(int arr[], int n)
// {
//     int lar = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > arr[lar])
//         {
//             lar = i;
//         }
//     }
//     return lar;
// }

// int secondLargest(int arr[], int n)
// {
//     int largest = getLargest(arr,n);
//     int res = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[largest])
//         {
//             if (res == -1)
//                 {
//                     res = i;
//                 }

//             else if (arr[i] > arr[res])
//                 {
//                     res = i;
//                 }
//         }
//     }
//     return res;

// }

// better approach i.e in only one traversal , tine complexity O(n)

int secondLargest(int arr[], int n)
{
    int res = -1;
    int largest = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }

        else if (arr[i] != arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
                 res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 20, 80, 100, 10};
    cout << secondLargest(arr, 5) << endl;
}