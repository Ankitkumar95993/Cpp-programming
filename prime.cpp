#include<iostream>
using namespace std;

bool isprime(int n)
{

 int count = 0;
    if(n<=1)
    {
        return false;
    }
   for (int i = 2; i < n; i++)
   {
     if(n%i==0)
     {
        return false;
        count++;
     }
    
   }
     return true;

}

int countprime(int n)
{
  int count = 0;
  for ( int i = 2; i < n; i++)
  {
    if(isprime(i))
    {
      count++;
    }
  }
  return count;
}
int main(){
    int n;
    cout<<"enter the no"<<endl;
    cin>>n;

    cout<<"total no of prime no are "<<countprime(n)<<endl;

//    int ans = isprime(n);

//    if(ans)
//    {
//     cout<<"prime no ";
//    }

//   else 
//  {
//     cout<< " not a prime no";
//  }


 
}