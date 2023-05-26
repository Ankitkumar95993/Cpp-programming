#include<iostream>
using namespace std;


// int maxDiff(int arr[],int n)
// {
//      int res = arr[1]-arr[0];
//     for(int i=0; i<n; i++){
       
//         for(int j = i+1; j<n ; j++)
//         {
//             res = max(res,arr[j]-arr[i]);
//         }

//     }
//     return res;
    
// }


int maxDiff(int arr[],int n)
{
    int maxDiff = arr[1]-arr[0];
    int minElement = arr[0];
    for(int j = 1 ; j<n; j++)
    {
       maxDiff = max(maxDiff,arr[j]-minElement);
       minElement = min(minElement,arr[j]);
    }
 return maxDiff;
}
int main()
{
     int arr[] = {2,3,10,6,4,8,1};
    // int arr[] = {10,20,30};
    cout<<maxDiff(arr,3);
  
 
}