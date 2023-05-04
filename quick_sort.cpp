#include<iostream>
using namespace std;

int partition(int arr[] , int si , int ei){
    int pivot = arr[si];
    int count = 0;

    for (int i = si + 1; i <= ei; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = si + count;
    swap(arr[pivotIndex], arr[si]);

    int i = si, j = ei;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
    }




void quick_sort(int a[] , int si , int ei){
    if(si >= ei){
        return ;
    }
   int c = partition(a,si,ei);
    quick_sort(a,si,c-1);
    quick_sort(a,c+1,ei);
}

int main() {
    int n;
    cin>>n;
     int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     
     quick_sort(a,0,n-1);
     for(int i = 0 ; i<n; i++){
        cout<< a[i] << " ";
     }
     return 0;
}