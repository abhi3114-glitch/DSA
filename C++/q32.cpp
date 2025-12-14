#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age"<<" ";
    cin>>age;
    if (age>=13 && age<=19)
    {
        cout<<"teenager";
    }
    else{
        cout<<"no";
    }
}