#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fib0 = 0, fib1 = 1,fibn=0;
    if(n==0){
        cout<<fib0<<endl;
        return 0;
    }
    else if(n==1){
        cout<<fib1<<endl;
        return 0;

    }
    else{
        for(int i=2;i<=n;i=i+1){
            fibn=fib0+fib1;
            fib0=fib1;
            fib1=fibn;

        }
    cout<<fibn<<endl;    

    }
    
    
    
}