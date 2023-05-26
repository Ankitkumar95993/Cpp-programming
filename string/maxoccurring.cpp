#include <iostream>
using namespace std;

int getmaxoccurringcharacter(string s)
{
    int arr[26] = {0};

    // creating an array of count;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find max character in string
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return maxi;
}

int main()
{

    string s;
    cin >> s;

    cout << getmaxoccurringcharacter(s) << endl;
}