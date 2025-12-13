#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=6;row++){
        
        for(col=10;col<=10+(row-1);col++){
            
            cout<<col<<" ";
        }
        cout<<endl;

    }
}