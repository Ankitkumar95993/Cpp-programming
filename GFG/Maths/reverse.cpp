#include<iostream>
using namespace std;

int reverse(int x)
{
    int rev = 0;
    int temp = x;
    while(temp>0)
    {
        int ld = temp%10;
        rev = rev*10+ld;
        temp = temp/10;

    }
    return rev;
}
int main(){

    cout<<reverse(234)<<endl;

}