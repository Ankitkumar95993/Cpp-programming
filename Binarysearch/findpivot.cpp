#include<iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int s = 0;
    int e = size-1;
    int mid = s+((e-s)/2);
    while(s<e)
    { 
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;

    }
    return s;
}

int main(){

    int arr[]={10,13,17,5,9};
    cout<<"pivot is "<< pivot(arr,5)<<endl;
 
 return 0;
}