#include <iostream>
using namespace std;

// int leftRotateByone(int arr[],int n)
// {
//     int temp = arr[0];
//     for(int i=1;i<n;i++)
//     {

//         arr[i-1] = arr[i];
//     }
//     arr[n-1]=temp;

// }  // time complexity = 0(nd);
// int leftRotateByD(int arr[],int n ,int d)
// {
//     if(d>n)
//     {
//         d=d-n;
//         for(int i=0;i<d;i++)
//          leftRotateByone(arr,n);
//     }

// }

// method 2
//   0(n) and space - O(d);

// int leftRotateByD(int arr[], int n, int d)
// {
//     int temp[d];
//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = arr[i];
//     }

//     for (int i = d ; i < n; i++)
//     {
//         arr[i-d] = arr[i];
//     }

//     for(int i=0;i<d;i++)
//     {
//         arr[n-d+i]=temp[i];
//     }
// }




// method 3


void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++,
        high--;
    }
}

int leftRotateByD(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    leftRotateByD(arr, 5, 2);
    print(arr, 5);
}