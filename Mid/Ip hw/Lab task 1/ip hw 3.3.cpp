#include<iostream>
using namespace std;
int main(){
    int BMI,m,h;
    cout<<"Enter your mass(in kilograms):";
    cin>>m;
    cout<<"Enter your height(in meters):";
    cin>>h;
    BMI=m/(h*h);
    cout<<" your body mass index "<<"is"<<BMI;
}
