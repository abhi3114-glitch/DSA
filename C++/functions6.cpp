#include<iostream>
using namespace std;
 long long factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;

 }

 long long combination(int n,int r){
    long long numberator=factorial(n);
    long long denominator=factorial(r)*factorial(n-r);

    return numberator / denominator;
 }



int main (){
    int a,b;
    cout<<"enter ur numbers";
    cin>>a>>b;
    long long answer=combination(a,b);
    cout<<answer<<endl;
    return 0;

}