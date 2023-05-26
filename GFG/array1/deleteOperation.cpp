#include <iostream>

using namespace std;

int del(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }
    return n;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int new_n = del(arr, 5, 3);
    cout<<new_n<<endl;
}