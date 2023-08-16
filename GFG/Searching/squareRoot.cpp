#include<iostream>
using namespace std;


// naive solution
// int SqRoot(int n)
// {
//     int i = 1;
//     while(i*i<=n)
//        i++;
//     return i-1;
// }

//efficient approach

int SqRoot(int x)
{
    int low = 1;
    int high = x;
    int ans = -1;
    
    while(low<=high)
    {
        int mid = (low+high)/2;
        int midsq = mid*mid;
        if(midsq==x)
           return mid;
        else if(midsq>x)
            high = mid-1;
        else{
           low = low+1;
           ans=mid;
        }
          
    }
    return ans;
}


int main(){

   cout<< SqRoot(17);


}