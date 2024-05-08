#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int key, int low, int high) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2; 
    if (arr[mid] == key) {
        return mid;
    }
    if (arr[mid] < key) {
        return binarySearch(arr, key, mid + 1, high);
    }
    return binarySearch(arr, key, low, mid - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    // nhap mang duoc sap xep
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int index = binarySearch(arr, key, 0, n - 1);
    if (index != -1) {
        cout <<"thứ tự tìm kiếm được :" << index << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
