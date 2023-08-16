#include<iostream>
using namespace std;

// int Triplet(int arr[], int n, int x)
// {
//     for(int i = 0;i<n-2;i++)
//      {
//         for(int j = i+1;j<n-1;j++)
//         {
//             for(int k = j+1;k<n;k++)
//             if(arr[i]+arr[j]+arr[k]==x)
//               return true;
//         }
//      }
//      return false;
// }

int TwoPair(int arr[],int x,int n,int i,int j)
{
    while(i<j)
    {
    if(arr[i]+arr[j]==x)
      return true;
    else if (arr[i]+arr[j]>x)
      j--;
    else
      i++;
    }
    return false;
    
}

int Triplet(int arr[],int x,int n)
{
    int i = 0;
    if(TwoPair(arr,x,n,i+1,n-1) == x-arr[i])
     return true;
    else 
    i++;
    
}




int main(){

    int arr[]= {2,3,4,8,9,20,40};
    cout<<Triplet(arr,32,7);
}