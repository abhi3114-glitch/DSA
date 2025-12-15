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
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*2;

    }
    while(num>0){
        rem=num%8;
        num=num/8;
        ans=rem*mul+ans;
        mul=mul*10;

    }
    cout<<ans;
    return 0;

}
