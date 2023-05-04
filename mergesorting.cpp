#include <iostream>
using namespace std;

void merge(int a[], int const si, int const mid, int const ei)
{
    int l1 = mid - si + 1;
    int l2 = ei - mid;
    // two array create
    int input1[l1], input2[l2];

     // copy data
    for (int i = 0; i < l1; i++)
    {
        input1[i] = a[si + i];
    }
    for (int j = 0; j < l2; j++)
    {
        input2[j] = a[mid + 1 + j];
    }
   
    // merge the array
    int i = 0, j = 0, k = si;
    while (i < l1 && j < l2)
    {
        if (input1[i] <= input2[j])
        {
            a[k] = input1[i];
            i++;
        }
        else
        {
            a[k] = input2[j];
            j++;
        }

        k++;
    }
    // left and right array puting
    while (i < l1)
    {
        a[k] = input1[i];
        i++;
        k++;
    }
    while (j < l2)
    {
        a[k] = input2[j];
        j++;
        k++;
    }
  
}
void merge_sort(int a[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    
    auto mid = (si+ei) / 2;
    merge_sort(a, si, mid);
    merge_sort(a, mid + 1, ei);
    merge(a, si, mid, ei);
    
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ei = n - 1;
    merge_sort(a, 0, ei);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}