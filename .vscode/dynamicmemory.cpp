#include<iostream>
using namespace std;

void update(int n)
{
   n++;
   cout<<"here value is "<<n<<endl;
}
void refupdate(int &n)
{
    n++;
} 

// int& func(int a)
// {
//     int num = a;      // iska scope bs isi function me hai
//     int& ans = num;
//     return ans;
// }

// int * fun(int n)
// {
//     int *ptr = &n;
//     return ptr;       //same with this function
// }



int main(){

    // int n =5;
    // cout<<"before "<<n<<endl;
    // update(n);
    // cout<<"after "<<n<<endl;

    // refupdate(n);
    // cout<<"now value is"<<n<<endl;
    // return 0;
 
int row;
cin>>row;

int column;
cin>>column;


int **arr = new int*[row];
for (int i = 0; i < row; i++)
{
   arr[i] = new int[column];
}


for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cin>>arr[i][j];
    }
    
}

cout<<endl;

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cout<<arr[i][j]<<" ";
        
    }cout<<endl;
    
}

//releasing memory

for(int i = 0; i<row;i++)
{
 delete [] arr[i];
}

delete []arr;

   


}