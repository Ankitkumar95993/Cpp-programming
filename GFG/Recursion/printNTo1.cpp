#include<iostream>
using namespace std;

void PrintN(int n)
{
    if(n==0)
    return ;

    cout<<n<<" ";
    PrintN(n-1);

}


int main(){

    PrintN(33);
}