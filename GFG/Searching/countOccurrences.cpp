#include<iostream>
using namespace std;

int countOccurrence(int arr[],int n, int x)
{
    int low = 0;
    int high = n-1;
    int count = 0;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>x)
          high = mid-1;
        else if(arr[mid]<x)
          low = mid+1;
        else
        {  
            count++;
            if(arr[mid-1]!= arr[mid] || arr[mid+1]!=arr[mid])
            {
                return count;
            }
            else{
                low = mid+1;
                count++;
                high = mid-1;
                count++;

            }

          return count;
        }
        
    }
    return -1;
}


int main(){

    int arr[] = {10,10,10,10,10};
    cout<<countOccurrence(arr,5,10);
}