#include<iostream> 
using namespace std;

int main() {
    cout << "Enter your number: ";
    int n;
    cin >> n;
    
    int row, col;
    
    for(row = 1; row <= n; row++) {
        for(col = 1; col <= n - row; col++) {
            cout << "  ";
        }
        
        
        for(col = n; col >=5-(row-1); col--) {
            
            cout << col << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}