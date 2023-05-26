#include<iostream>
using namespace std;

int binarysearch(int arr[],int size, int key)
{
int s = 0;
int e = size-1;
int mid = s+(e-s)/2;

while (s<=e)
{

    if( key == arr[mid])
    {
        return mid;
    }

    if(key>arr[mid])
    {
        s = mid+1;
    }
    else{
        e = mid-1;
    }

    mid = s+(e-s)/2;
}
return -1;
}


int main(){
     
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

   int index =  binarysearch(arr,n-1,9);

   cout<<"index of 9 is "<<index<<endl;

}