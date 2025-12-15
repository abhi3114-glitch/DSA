#include<iostream>
using namespace std;

int rev(int a){
    int rem,ans=0;
    while (a){
        rem=a%10;
        a=a/10;
        ans=ans*10+rem;
    }
    return ans;
}


int main(){
    int n;
    cout<<"enter ur number"<<endl;
    cin>>n;
    int final=rev(n);
    cout<<"ur reverse is"<<" "<<final;
}