#include <iostream>
using namespace std;

// int removesDuplicates(int arr[], int n)
// {
//     int temp[n];
//     temp[0] = arr[0];
//     int count = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (temp[count - 1] != arr[i])
//         {
//             temp[count] = arr[i];
//             count++;
//         }

//         for (int i = 0; i < count; i++)
//         {
//             arr[i] = temp[i];
//         }
//     }

//     return count;
// }

// doing in O(1) auxiliary space and better approach


int removesDuplicates(int arr[],int n)
{
int count = 1;
for(int i = 1 ; i<n;i++)
{
    if(arr[i]!=arr[count-1])
     {
        arr[count] = arr[i];
        count++;
     }
}
return count;
}

int main()
{
    int arr[] = {20, 20, 20, 20,50,70,70,90,90};
    cout << removesDuplicates(arr, 9) << endl;
}