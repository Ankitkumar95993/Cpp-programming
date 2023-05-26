#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int c;
    cout<<"enter the no"<<endl;
    cin>>c;

    int ans = 0;

while(c!=0)
{
    int digit = c%10;
    ans = ans*10+digit;
    c=c/10;
}

cout<<ans<<endl;





}