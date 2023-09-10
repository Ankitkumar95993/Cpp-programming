
#include<iostream>
#include<vector>
using namespace std;

int addedge(vector<int>adj[],int u,int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);

}

void printGraph(vector<int>adj[],int v)
{
 for(int i = 0;i<v;i++)
 {
    for(int x:adj[i])
    {
        cout<<x<<" ";
    }
    cout<<endl;
 }
}
int main(){
    int v = 4;
    vector<int>adj[v];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,1,3);
    printGraph(adj,v);
    return 0;
}