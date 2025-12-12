#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i=i+1){
        
        sum=sum+(i*i);
        

    }
    cout<<sum<<endl;
    return 0;
}