#include <iostream>
using namespace std;
int main(){
    int arr[18]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    double avg,sum=0;
    for(int i=0;i<18;i++){
        sum=sum+arr[i];
        avg=sum/18;

    }
    cout<<avg;


}
