#include<iostream>
using namespace std;
#include<unordered_set>


//naive approach
// int countDist(int arr[],int n)
// {
//     int res=0;
//  for(int i = 0;i<n;i++)
//  {
//     bool flag = false;
//     for(int j= 0;j<i;j++)
//     {
//         if(arr[i]==arr[j])
//           {
//             flag = true ;
//             break;
//           } 
          
//     }
//     if(flag==false)
//      res++;

//  }
//  return res;
// }



//efficient approach

// int CountDist(int arr[],int n)
// {
//     unordered_map <int,int > m;
//     for(int i = 0;i<n;i++)
//     {
//         m[arr[i]]++;
//     }
//     for(auto x:m){
//     cout<<x.first<<" "<<x.second<<endl;
//     }

//     return m.size();
    
// }

int Countdist(int arr[],int n)
{
    unordered_set<int>s(arr,arr+n);
    // for(int i=0;i<n;i++)
    // {
    //     s.insert(arr[i]);
    // }

 return s.size();
}




int main(){

    int arr[] = {2,5,6,3,4,2,3,4,6,6};
    cout<<Countdist(arr , sizeof(arr)/sizeof(*arr));
    




}