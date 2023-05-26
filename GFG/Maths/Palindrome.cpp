#include<iostream>
using namespace std;

bool palindrome(int x){
    int rev = 0;
    int temp = x;
    while(temp!=0)
    {
        int a = temp%10;
        rev = rev*10 + a;
        temp = temp/10;
    }
    return (rev==x);

}

int main(){

    cout<<palindrome(78988)<<endl;

}