#include<iostream>
using namespace std;
int main(){
    int n,pow;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"Enter its power"<<endl;
    cin>>pow;
    int answer=1;
    for(int i=1;i<=pow;i=i+1){
        answer=answer*n;
        

    }
    cout<<answer<<endl;
    return 0;
}