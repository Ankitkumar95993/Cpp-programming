#include <iostream>
using namespace std;

int greatestElement(int arr[], int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     bool flag = true;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if (flag == true)
    //         return i;
    // }
    // return -1;


    int res = 0;
    for(int i=1;i<n;i++)
    {
       if(arr[i]>arr[res])
       {
        res = i;
       }
    }
    return res;
}

int main()
{
    int arr[] = {50, 90, 20, 1, 100, 80};
    cout << greatestElement(arr, 6) << endl;
}