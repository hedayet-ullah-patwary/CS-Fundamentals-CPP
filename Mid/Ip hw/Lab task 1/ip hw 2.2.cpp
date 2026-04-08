#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b;
cout<<"Enter two number:"<<endl;
cin>>a>>b;
if (a%b==0){
    cout<<a<<" is multiple of "<<b<<endl;}
    else{
        cout<<b<<" is not multiple of "<<b<<endl;
    }
    return 0;
}
