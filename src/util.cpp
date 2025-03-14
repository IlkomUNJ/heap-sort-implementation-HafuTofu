#include <iostream>

using namespace std;

void Maxheapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        Maxheapify(arr, n, largest);
    }
}

void buildheap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        Maxheapify(arr, n, i);
}

void printheap(int arr[], int n)
{
    cout << "Array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}