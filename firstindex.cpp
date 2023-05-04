#include <iostream>
using namespace std;

int firstindex(int *input, int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    else{
        static int i = 0;

    if (input[0] == x)
    {
        return i;
    }
    else
    {
        i++;
        return firstindex(input + 1, n - 1, x);
    }
    }
}

int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;

    int *input = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    cout << firstindex(input, n, x) << endl;

    return 0;
}