#include<iostream>
#include<stack>
using namespace std;

void deletemiddle(stack<int>&s, int size,int count)
{
    
  if(count==size/2)
  {
    s.pop();
    return;
  }

  int num = s.top();
  s.pop();
  deletemiddle(s,size,count+1);

  s.push(num);

}

int main(){
    stack<int>s;
    int n;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        s.push(i);
    }
   



    return 0;
}
