#include<iostream>
using namespace std;
int main(){
    // int package;
    // cout<<"Enter a number"<<endl;
    // cin>>package;
    // if(package>1000000){
    //     cout<<"Accepted"<<endl;
    // }
    // else{
    //     cout<<"not accepted"<<endl;
    // }
    // 
    // char word;
    // cout<<"Enter ur word"<<endl;
    // cin>>word;
    // if(word=='a' || word=='e' || word=='i' || word=='o' || word=='u'){
    //     cout<<"vowel"<<endl;
    // }
    // else{
    //     cout<<"consonant"<<endl;
    // }
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if(number==1 ){
        cout<<"Monday"<<endl;
    }
    else if(number==2){
        cout<<"Tuesday"<<endl;
    }
    else if (number==3){
        cout<<"Wednesday"<<endl;
    }
    else if(number==4){
        cout<<"Thursday"<<endl;
    }
    else if(number==5){
        cout<<"Friday"<<endl;
    }
    else if(number==6){
        cout<<"Saturday"<<endl;
    }
    else if(number==7){
        cout<<"Sunday"<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
}