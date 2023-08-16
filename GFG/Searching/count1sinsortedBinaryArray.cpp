#include<iostream>
using namespace std;

int countOne(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==0)
        {
            low = mid+1;
        }
        else{
            if(arr[mid-1]==0 || mid==0)
                return (n-mid);
            else{
                high = mid-1;
            }
        }
               

        }
    }


//naive approach
// int countOne(int arr[],int n)
// {
//     int count = 0;
//     for(int i = 0;i<n;i++)
//     {
        
//         if(arr[i]==1)
//           count++;
//     }
//     return count;
// }


int main(){

    int arr[]={0,0,1,1,1,1,1};
    cout<<countOne(arr,7);

}