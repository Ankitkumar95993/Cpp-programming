#include<iostream>
using namespace std;

// int findLeader(int arr[],int n)  // time complexity = 0(n2);
// {
//     int temp[n];
//   for(int i = 0;i<n;i++)
//   {
//     bool flag = true;
//     for(int j=i+1;j<n;j++)
//     {
//         if(arr[i]<=arr[j])
//          {
//               flag=false;
//               break;
//          }
//     }
//     if(flag==true)
//     {
//         cout<<arr[i]<<" ";
//     }
//   }
// }


// method 2  0(n)

int findLeader(int arr[],int n)
{
    int leader = arr[n-1];
    cout<<leader<<" ";
    for(int i = n-2; i>=0; i--)
    {
        if(arr[i]>leader)
        {
            leader = arr[i];
            cout<<leader<<" ";
        }
    }

}

int main(){

int arr[]={7,10,4,10,6,5,2};
findLeader(arr,7);


}