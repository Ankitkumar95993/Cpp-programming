#include<iostream>
using namespace std;

int operation(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {  
        for(int j=i+1 ;j<n; j++)
        {
          if(arr[i]>arr[j])
             return sum = (arr[i]-arr[j]+1)+sum;
          else 
            return 0;
        
        }
        
    }
}
int main(){

int arr[] = {2,3,1,4,5};
cout<<operation(arr,5);


}