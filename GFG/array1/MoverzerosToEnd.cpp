#include <iostream>
using namespace std;

// void movesZeros(int arr[],int n)
// {
//     int temp[n];
//     int res=0;
//     for(int i = 0; i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//           temp[res]=arr[i];     // O(n)
//           res++;
//         }
//     }

//     for(int i = 0;i<n;i++)
//     {
//         arr[i]=temp[i];
//     }

// }



// void movesZeros(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {                                    // O(n2)
//             for (int j = i + 1; j < n; i++)
//             {
//                 if (arr[j] != 0)
//                     swap(arr[j], arr[i]);
//             }
//         }
//     }
// }


// most efficient approach

void movesZeros(int arr[],int n)
{
        int count = 0;
    for(int i = 0; i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }

}

void printer(int arr[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
 }

int main()
{
    int arr[] = {0, 0, 20, 0, 30, 0, 0, 0, 10};
    movesZeros(arr, 9);
    printer(arr,9);
}