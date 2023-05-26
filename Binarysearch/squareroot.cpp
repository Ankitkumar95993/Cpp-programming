#include <iostream>
using namespace std;

int findsqroot(int n)
{

    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {

        if (mid * mid == n)
        {
            return mid;
        }

        if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

double moreprecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = ans; j*j < n ; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int tempsol = findsqroot(n);

    cout<< "ans is "<< moreprecision(n,3,tempsol)<<endl;

}