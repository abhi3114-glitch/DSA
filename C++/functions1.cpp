#include <iostream>
using namespace std;

void cube(int &a){
    a=a*a*a;
}




int main(){
    int n;
    cout<<"enter ur number"<<endl;
    cin>>n;
    cube(n);
    cout<<"cube is"<<" "<<n;

}
