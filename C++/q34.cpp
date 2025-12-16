#include<iostream>
using namespace std;


char convert(char name){
    name=name-'a'+'A';
    return name;
}


int main(){
    char name;
    cout<<"enter ur name"<<endl;
    cin>>name;
    char pika=convert(name);
    cout<<pika;

}
