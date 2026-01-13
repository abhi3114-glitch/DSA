#include <iostream>
using namespace std;
int main(){
    int arr[18]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int ans=0;
    float fans=0;
    for(int i=0;i<18;i++){
        ans=ans+arr[i];
        
    }
    fans=ans/18.00;
    cout<<fans;
}
