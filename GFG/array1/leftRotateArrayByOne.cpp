#include<iostream>
using namespace std;

int leftRotateByOne 
(int arr[],int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void print(int arr[],int n){
    for(int i = 0; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
int arr[] = {1,2,3,4,5};
leftRotateByOne(arr,5);
print(arr,5);
}