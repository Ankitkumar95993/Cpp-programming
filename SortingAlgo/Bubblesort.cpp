#include <iostream>
using namespace std;

int bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            swapped = true;
        }
        if(swapped == false)
             break;
    }
}

int main()
{  
    int arr[]={54,32,2,12};
    bubble(arr,4);
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    

    return 0;
}