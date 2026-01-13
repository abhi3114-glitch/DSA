#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Store last element
    int temp = arr[n-1];
    
    // Shift all elements to the right
    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    
    // Put last element at the beginning
    arr[0] = temp;
    
    // Print rotated array
    cout << "Rotated array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}