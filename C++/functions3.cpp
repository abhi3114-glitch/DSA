#include<iostream>
using namespace std;

void rev(int &x,int &y,int &z){
    int q;
    q=z;
    z=y;
    y=x;
    x=q;

    
}




int main(){
    int a=1,b=2,c=3;
    rev(a,b,c);
    cout<<a<<b<<c;

}