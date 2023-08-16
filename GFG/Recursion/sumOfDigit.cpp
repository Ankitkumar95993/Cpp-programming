#include<iostream>
using namespace std;

int sumOfDigit(int n)
{
  if(n==0)
    return 0;

    return  sumOfDigit(n/10) + n%10;
}
int main(){

    cout<<sumOfDigit(873);
}