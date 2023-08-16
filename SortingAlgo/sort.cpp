// C++ program to initialize
// a vector like an array.
#include <iostream>
#include <vector>
using namespace std;

struct point{
    int x,y;
};

bool myCmp(point p1,point p2)
{
    return(p1.x<p2.x);
}

int main()
{   
    point arr[4]={{39,4},{6,7},{2,4},{32,3}};
    sort(arr,arr+4,myCmp);
    for(auto i:arr)
    {
        cout<<i.x<<" "<<i.y<<endl;
    }
   
}
