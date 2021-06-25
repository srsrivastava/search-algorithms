#include <iostream>
using namespace std;

int lSearch(int arr[], int n, int x) {
    for(int i = 0; i < n; i++){
        if(arr[i] == x)
            return i;
    }

    return -1;
}

int main() {
    int arr[] = {12, 34, 56, 67, 89, 102};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int idx = lSearch(arr, size, 67);
    cout << idx;
}