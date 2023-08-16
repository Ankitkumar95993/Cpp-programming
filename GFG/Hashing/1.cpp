#include<iostream>
using namespace std;


void insert(int table[],int i)
{
     table[i] = 1;
}

bool search(int table[],int i)
{
    return table[i];
}

void todelete(int table[],int i)
{
    table[i]=0;
}

    


int main(){

   int table[999]={0};
   insert(table,15);


}