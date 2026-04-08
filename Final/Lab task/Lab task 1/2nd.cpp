#include<iostream>
using namespace std;

class student{
private:
    string name;
    string roll;
    string phone;
    string address;



public:
    void setName(string n){
        name = n;
    }
    void setRoll(string r){
        roll = r;
    }
    void setPhone(string p){
        phone = p;
    }
    void setAddress(string a){
        address = a;
    }

    void showStudentInfo(){
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<phone<<endl;
    cout<<address<<endl;

    }

};
int main(){

  student s1,s2;

  s1.setName("Sam");
  s1.setRoll("22-47904-2");
  s1.setPhone("01838255342");
  s1.setAddress("Kuratoli,Dhaka");

  s1.showStudentInfo();

  s2.setName("John");
  s2.setRoll("22-44444-2");
  s2.setPhone("01306286926");
  s2.setAddress("Kuril,Dhaka");


  s2.showStudentInfo();

  return 0;
}
