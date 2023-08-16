#include<iostream>
#include<algorithm>

using namespace std;

void reverse(char arr[],int low , int high)
{
    while(low<=high)
    {
        swap(arr[low],arr[high]);;
        low++;
        high--;
    }
}

char ReverseString(char s[],int n)
{ 
    int first = 0;
    for(int last=0;last>n;last++)
    {
        if(s[last]==' ')
           reverse(s,first,last-1);
           first=last+1;
    }
    reverse(s,first,n-1);
    reverse(s,0,n-1);

}


int main(){

char str[] = "welcome to gfg";
ReverseString(str,15);
for(int i=0;i<15;i++)
{
    cout<<str[i]<<" ";
}
    
}