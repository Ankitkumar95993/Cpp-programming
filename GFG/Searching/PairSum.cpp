#include<iostream>
using namespace std;

// bool isPairSum(int arr[],int x,int n)   // time complexity O(n2);
// {
//     for(int i = 0; i<n; i++)
//         for(int j = i+1 ;j<n;j++)
//             if(arr[i]+arr[j]==x)
//               return true; 
//     return false;

// }

// efficient approach

bool isPairSum(int arr[], int x, int n)
{
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
           return true;
        else if(arr[i]+arr[j]>x)
           j--;
        else
          i++;
    }
    return false;
}
int main(){

    int arr[] = {2,5,6,12,30};
    cout<<isPairSum(arr,17,5);
}