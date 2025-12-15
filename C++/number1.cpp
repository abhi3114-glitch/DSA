#include<iostream>
using namespace std;
int main(){
    int num,rem,mul,ans;
    cout<<"enter ur num "<<" ";
    cin>>num;
    rem=0;
    mul=1;
    ans=0;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;

    }
    cout<<ans;
    return 0;

}
