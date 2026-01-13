#include<iostream>
using namespace std;
int main(){
    int arr[18]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int ans;
    cout<<"Enter the number to search: ";
    cin>>ans;
    for(int i=0;i<18;i++){
        if(arr[i]==ans){
            cout<<"Element found at index "<<i;
            return 0;
        }
    }
    cout<<"-1";

    
}