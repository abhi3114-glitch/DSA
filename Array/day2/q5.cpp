#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    vector<char> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}