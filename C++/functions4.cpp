#include <iostream>
using namespace std;

void Swap(int &x, int &y){
    // int c;
    // c=y;
    // y=x;
    // x=c;
    // x=x+y;
    // y=x-y;
    // x=x-y;
    x=x^y;
    y=x^y;
    x=x^y;
}


int main(){


int a=1,b=2;
Swap(a,b);
cout<<a<<b;
}