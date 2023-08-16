#include<iostream>
using namespace std;

int binarySearch(int arr[], int x, int n)
{
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
 int mid = (start+end)/2;
    if(arr[mid]==x)
      return mid;
    else if(arr[mid]>x)
      end = mid-1;
    else
      start = mid+1;
    
    }
    return -1;
   
}
int main(){
}