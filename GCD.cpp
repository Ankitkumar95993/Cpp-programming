#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(a==0)
    return b;

    if(b==0)
    {
        return a;
    }
    
    while(a != b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return b ;
}

int main(){
int a =72;
int b =24;

cout<<"the gcd of two number is "<<GCD(a,b)<<endl;

}