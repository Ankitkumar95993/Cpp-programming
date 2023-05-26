#include<iostream>
using namespace std;

int largestrowsum(int arr[][4],int row , int col)
{
    int maxi = INT_MIN;
    int rowindex = -1;
    for (int i = 0; i < 3; i++)
    { int sum = 0;
       for(int j =0 ;j<4;j++)
       {
         sum = sum+arr[i][j];
       }

    if(sum > maxi)
    {
        maxi = sum;
        rowindex = i;
    }
    }
    cout<<" the maximum sum is "<< maxi <<endl;
    return rowindex;
}

int main(){

    
    int arr[3][4];


    for (int i = 0; i < 3; i++)
    {
       for(int j =0 ;j<4;j++)
       {
         cin>>arr[i][j];
       }
    }
    
  cout<<"max row index is at"<<largestrowsum(arr,3,4);



    
}