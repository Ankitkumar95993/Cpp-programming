#include<iostream>
#include<list>

using namespace std;

struct MyHash
{
    int Bucket;
    list<int>*table;

    MyHash(int b)
    {
        Bucket = b;
        table = new list<int>[b];
    }

    void insert(int key)
    { 
        int i = key % Bucket ;
        table[i].push_back(key);
       
    }

    bool search(int key)
    {
        int i  = key%Bucket;
        for(auto x : table[i])
         {
            if(x==key)
            return true;
         }
         return false;
    }

    void remove(int key)
    {  
       int i = key % Bucket;
       table[i].remove(key);

    }
}


int main(){
    
}
