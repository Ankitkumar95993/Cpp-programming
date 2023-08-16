#include <iostream>
using namespace std;

// int LastOccurrence(int arr[],int n, int x)
// {
//     int low = 0;
//     int high = n-1;

//     while(low<=high)
//     {
//         int mid = (low+high)/2;
//         if(arr[mid]>x)
//           high = mid-1;

//         else if(arr[mid]<x)
//            low = mid+1;

//         else
//         {
//             if(mid == n-1 || arr[mid]!= arr[mid+1])
//                return mid;
//             else
//                low = mid+1;

//         }
//     }
//     return -1;
// }

int lastOccurrence(int arr[], int x, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] > x)
        return lastOccurrence(arr, x, low, mid - 1);
    else if (arr[mid] < x)
        return lastOccurrence(arr, x, mid + 1, high);
    else
    {
        if (arr[mid] != arr[mid + 1] || mid == high)
            return mid;
        else
            return lastOccurrence(arr, x, mid + 1, high);
    }
}

int main()
{
    int arr[] = {5, 10, 10, 15, 20, 20, 20};
    cout << lastOccurrence(arr, 20, 0, 6) << endl;
}