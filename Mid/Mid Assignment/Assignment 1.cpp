#include<iostream>
using namespace std;

int main(){

int a;

cout<<"Input marks:"<<endl;
cin>>a;
{

 if(a<=49){
 cout<<"Your Grade is: F"<<endl;
 cout<<"Your Grade Point is: 0.00"<<endl;
 }
 else if(a<=59){

 cout<<"Your Grade is: D"<<endl;
 cout<<"Your Grade Point is: 2.25"<<endl;
 }

 else if(a<=64){

 cout<<"Your Grade is: D+"<<endl;
 cout<<"Your Grade Point is: 2.50"<<endl;
 }

 else if(a<=69){

 cout<<"Your Grade is: C"<<endl;
 cout<<"Your Grade Point is: 2.75"<<endl;
 }

 else if(a<=74){

 cout<<"Your Grade is: C+"<<endl;
 cout<<"Your Grade Point is: 3.00"<<endl;
 }

 else if(a<=79){

 cout<<"Your Grade is: B"<<endl;
 cout<<"Your Grade Point is: 3.25"<<endl;
 }

 else if(a<=84){

 cout<<"Your Grade is: B+"<<endl;
 cout<<"Your Grade Point is: 3.50"<<endl;
 }

 else if(a<=89){

 cout<<"Your Grade is: A"<<endl;
 cout<<"Your Grade Point is: 3.75"<<endl;
 }
 else if(a<=100){

 cout<<"Your Grade is: A+"<<endl;
 cout<<"Your Grade Point is: 4.00"<<endl;

}
}

return 0;

}
