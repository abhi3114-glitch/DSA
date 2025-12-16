#include<iostream>
#include<cmath>  // For pow() function
using namespace std;

int countDigits(int num){  // Renamed to avoid conflict
    int digitCount = 0;
    while(num != 0){
        digitCount++;
        num = num / 10;
    }
    return digitCount;
}

bool isArmstrong(int n, int digit){
    int ans = 0;  // Initialize to 0
    int originalNum = n;  // Save original number
    
    while(n != 0){
        int rem = n % 10;
        ans = ans + pow(rem, digit);
        n = n / 10;
    }
    
    return (ans == originalNum);
}

int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    
    int digitCount = countDigits(n);
    bool result = isArmstrong(n, digitCount);
    
    cout << "Is Armstrong number? " << (result ? "Yes" : "No") << endl;
    
    return 0;
}