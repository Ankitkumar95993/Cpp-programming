#include<iostream>
using namespace std;

// naive approach
// int Search(int arr[],int x)      // time complexity O(log(pos))
// {
//     int i = 0;
//     while(true)
//     {
//         if(arr[i]==x)
//           return i;
//         if((arr[i]>x))
//           return -1;
//         i++;
//     }
// }

//efficient approach

int binarySearch(int arr[],int x,int low,int high)
{
    while(low<=high)
    {
     int mid = (low+high)/2;
     if(arr[mid]==x)
       return mid;
     else if(arr[mid]>x)
        high = mid-1;
     else
        low = mid+1;
    }
    return -1;
}

int Search(int arr[],int x)
{
    if(arr[0]==x)
    return 0;
    int i = 1;
    while(arr[i]<x)
        i = i*2;
    if(arr[i]==x)
       return i;
    return binarySearch(arr,x,i/2-1,i);

}

int main(){

    int arr[] ={5,10,15,20,40,60,100,200,300,500,800,1000};
    cout<<Search(arr,30);

}