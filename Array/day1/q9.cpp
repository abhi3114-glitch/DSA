#include<iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    int ans=INT_MIN;
    int secans=INT_MIN;
    int thirdans=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans){
            thirdans=secans;
            secans=ans;
            ans=arr[i];
        }
        else if(arr[i]>secans && arr[i]!=ans){
            thirdans=secans;
            secans=arr[i];
        }
        else if(arr[i]>thirdans && arr[i]!=secans &&  arr[i]!=ans){
            thirdans=arr[i];
        }
    }
    cout<<thirdans;
    return 0;
}