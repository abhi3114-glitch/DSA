//binary search in ascending order array
#include<iostream>
using namespace std;

    

int main() {
    int arr[5]={11,9,7,5,3};
    int start=0;
    int end=4;
    int key;
    int mid;
    cout<<"Enter element to search: "; 
    cin>>key;
    while(start<=end){
        mid = start +(end -start)/2;
        if(arr[mid] == key){
            cout<<mid;
            return mid;
            break;
        }
        else if(arr[mid]<key){
            end = mid-1;
        }
        else{
            start =mid+1;
        }
    }


    return -1;
}