
#include<iostream>
#include<algorithm>
using namespace std;

// int RepeatingElement(int arr[],int n)
// {
//     for(int i = 0 ;i<n ; i++)
//     {
//         for(int j =i+1 ; j<n; j++)
//         {
//             if(arr[i]==arr[j])
//               return arr[i];
//         }
//     }
// }

// int RepeatingElement(int arr[],int n)
// {
//     sort(arr,arr+n);
//     for(int i =0;i<n;i++)
//     {
//         if(arr[i]==arr[i+1])
//         return arr[i];
//     }

// }

int RepeatingElement(int arr[],int n)
{
    int i=0;
    int j=n-1;
    if(arr[i]==arr[j])
}

int main(){

    int arr[] = {0,2,1,3,4,5,4,4,4};
    int n= 9;
    vector<bool> visited(n,false);
    int ans;
   for(int i=0;i<n;i++)
   {
    if(visited[arr[i]])
      {ans= arr[i];
       break;}
    else
      visited[arr[i]]=true;
   }
   cout<<ans;
    //cout<<RepeatingElement(arr,9);
}