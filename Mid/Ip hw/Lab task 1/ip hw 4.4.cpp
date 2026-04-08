#include<iostream>
using namespace std;
int main(){
int i,j;
float a[5],b[5];
float e=0;
for(i=0;i<5;i++){
    cout<<"Enter the product number"<<endl;
    cin>>a[i];
    cout<<"Enter the product quantity"<<endl;
    cin>>b[i];
    if(a[i]==1){
        e=e+b[i]*200.75;
    }
    if(a[i]==2){
        e=e+b[i]*345.50;
    }
    if(a[i]==3){
        e=e+b[i]*775.75;
    }
    if(a[i]==4){
        e=e+b[i]*400.35;
    }
    if(a[i]==5){
        e=e+b[i]*1200.75;
    }
}
cout<<"total retail value of products"<<e;
}
