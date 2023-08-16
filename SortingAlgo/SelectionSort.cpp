#include<iostream>
using namespace std;

int SelectionSort(int arr[],int n)
{
    int temp[n];
    for(int i = 0; i<n-1 ;i++)
    {    int min_ind = 0;
        for(int j=1;j<n;j++)
        {
           if(arr[j]<arr[min_ind])
               min_ind = j;
        }
       temp[i] = arr[min_ind];
       arr[min_ind] = INFINITY;
        
    }
    for(int i = 0;i<n;i++)
    {
        arr[i] = temp[i];
    }
}

//effective sol

int selectionSort(int arr[],int n)
{
    
    for(int i = 0;i<n-1;i++)
    {
        int min_ind = i;
        for(int j = i+1 ;j<n;j++)
        {
            if(arr[j]< arr[min_ind])
                min_ind = j;
        }
        swap(arr[min_ind],arr[i]);
    }
}

int main(){
}