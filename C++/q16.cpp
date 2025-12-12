#include<iostream>
using namespace std;
int main(){
    int n,factorial=1;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i=i+1){
        
        factorial=factorial*i;
        
        

    }
    cout<<factorial<<endl;
    return 0;
}