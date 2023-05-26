#include<iostream>
using namespace std;

//  if the array is sorted , but what if when array is not sorted
// it take 0(n) time complexity
int Freq(int arr[],int n)
{
    int count = 1,i=1;;
    while(i<n)
    {  
        while(i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        cout<<arr[i-1]<<" "<<count<<endl;
        count = 1;
        i++;
    }
    if(n==1 || arr[n-1]!= arr[n-2])
      cout<<arr[n-1]<<" "<< 1 ;
}

int main(){
    int arr[] = {10,10,10,25,30,40};
    Freq(arr,6);

}