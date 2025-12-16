#include<iostream>
using namespace std;
int main(){
    int A=4;
    int B=3;
    int count=0;
    count=count+min(8-A,8-B);
    count=count+min(8-A,8-1);
    count=count+min(8-1,8-1);
    count=count+min(8-1,8-B);

    return count;

}