#include "util.cpp"

int main()
{
    int arr[] = {4,1,3,2,16,9,10,14,8,7};
    int n = sizeof(arr) / sizeof(arr[0]);   
    cout << "original array is \n";
    printheap(arr, n);

    buildheap(arr, n);

   

    cout << "array after heap sort \n";
    printheap(arr, n);

    return 0;
}