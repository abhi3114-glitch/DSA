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
        
        
        for(col = 1; col <=row; col++) {
           char name = 'A' + (n - col);
            
            
            
            cout << name << " ";
        }
        
        
        cout << endl;
    }
    
    return 0;
}