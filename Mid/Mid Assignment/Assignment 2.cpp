#include<iostream>
using namespace std;

int main(){

int a;
char b;
 string f1;
 cout<<"How many characters: "<<endl;
 cin>>a;

 cout<<"Must have character: "<<endl;
 cin>>b;

 while(true)
 {
     cout<<"Write your answer: "<<endl;
     cin>>f1;
  if(f1.length()!=a&& f1[0]==b) {

    cout<<"You gueses wrong word"<<endl;
 }
else
{
    cout<<"Your given word "<<f1<<" has "<<a<<" character and character "<<f1[0]<<" has in this word."<<endl;
}

return 0;
 }
}




