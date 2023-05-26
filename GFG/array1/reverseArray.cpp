#include <iostream>
using namespace std;

int reverseArray(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int temp;

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    };
    
}

    void print(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }


int main()
{

    int arr[]={43,21,52,12,13};
    reverseArray(arr,5);
    print(arr,5);
    
}