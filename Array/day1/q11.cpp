#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //find the missing number in array of size N containing numbers from 1 to N

    int total=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"The missing number is: "<<total-sum;

    return 0;

}