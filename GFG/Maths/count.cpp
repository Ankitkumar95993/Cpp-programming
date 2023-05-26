#include<iostream>
using namespace std;

int countDigit(int x)
{
    int res = 0;
    while(x>0)
    {
        x = x/10;
        res++;
    }
    return res;
}   

int main(){
    
    cout<<countDigit(2352)<<endl;
}