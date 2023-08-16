#include <iostream>
using namespace std;

// int firstOccurrence(int arr[], int low, int high,int x)
// {

//     if(low>high)
//      return -1;

//     int mid = (low+high)/2;

//     if(x>arr[mid])
//       return firstOccurrence(arr,mid+1,high,x);

//     else if(x<arr[mid])
//      return firstOccurrence(arr,low,mid-1,x);

//     else
//     {
//         if(mid==0 || arr[mid-1] != x)
//          return mid;
//         else
//          return firstOccurrence(arr,low,mid-1,x);

//     }

// }

int firstOccurrence(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid]< x)
         low = mid + 1;

        else
        {
            if (arr[mid - 1] != arr[mid] || mid == 0)
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {5, 10, 10, 15, 20, 20, 20};
    cout<<firstOccurrence(arr, 7, 20)<<endl;
}