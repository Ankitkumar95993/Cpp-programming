#include<iostream>
using namespace std;


bool binarysearch(int *arr, int s,int e,int value)
{
    if(s>e)
    return false;

    int mid = s+(e-s)/2;

    if(arr[mid]==value)
    return true;

    if(arr[mid]< value)
    return binarysearch(arr,mid+1,e,value);

    else{
        return binarysearch(arr,s,mid-1,value);
    }

}
int main()
{

    int arr[]={2,34,59,203,423,43,293,3,13,45l};
    bool ans = binarysearch(arr,0,9,423);

   cout<<"index of 423 is"<<ans<<endl;

}

