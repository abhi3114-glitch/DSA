#include<iostream> 
using namespace std;

int main() {
    cout << "Enter your number: ";
    int n;
    cin >> n;
    
    int row, col;
    
    for(row = 1; row <= n; row++) {
        // Print leading spaces
        for(col = 1; col <= n - row; col++) {
            cout << "  ";
        }
        
        // Print decreasing numbers from row to 1
        for(col = row; col >= 1; col--) {
            cout << col << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}