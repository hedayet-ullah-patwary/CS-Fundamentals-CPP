#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b;
cout<<"enter the frist number:";
cin>>a;
cout<<"enter the second name:";
cin>>b;
if (a%2==0){
    cout<<a<<" is even "<<endl;
}
else{
    cout<<a<<" is odd "<<endl;
}
if(b%2==0){
    cout<<b<<" is even "<<endl;
}
else{
    cout<<b<<" is odd "<<endl;
}
if(a>b){
    cout<<" Frist number "<< a <<" is meximum";
}
else{
    cout<<" Second number "<< b <<" is the meximum";
}
}
