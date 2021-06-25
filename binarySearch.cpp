#include <iostream>
using namespace std;


int bSearch(int arr[], int low, int high, int x) {
    if(low > high)
        return -1;

    int mid = (low+high)/2;

    if(arr[mid] == x)
        return mid;

    else if (arr[mid] < x)
        return bSearch(arr, mid+1, high, x);
    else 
        return bSearch(arr, low, mid-1, x);
}

int main() {
    int arr[] = {12, 34, 56, 67, 89, 102};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = size-1;

    int idx = bSearch(arr, low, high, 67);

    cout << idx;
}