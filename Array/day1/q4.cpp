#include<iostream>
using namespace std;
int main(){
    int arr[20];
    int ans=0;
    for(int i=0;i<20;i++){
        cin>>arr[i];
    }
    for(int i=0;i<20;i++){
        ans=ans+arr[i];
    }
    cout<<ans;

}