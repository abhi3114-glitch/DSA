//binary search in ascending order array
#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid; // Key found at index mid
        }
        // If key is greater, ignore left half
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        // If key is smaller, ignore right half
        else {
            end = mid - 1;
        }
    }
    return -1; // Key not found
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}