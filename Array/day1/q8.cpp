#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,18,20,12,15};
    int ans=INT_MIN;
    int fans=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans){
            fans=ans;
            ans=arr[i];
        }
        else if(arr[i]>fans && arr[i]!=ans){
            fans=arr[i];
        }
    }
    cout<<fans;
    return 0;
}