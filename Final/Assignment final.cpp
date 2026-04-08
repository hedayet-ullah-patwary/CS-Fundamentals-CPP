#include<iostream>
using namespace std;

class Person{

protected:
    string name;

public:
    Person(){}
    Person(string n){
        name = n;
    }
    ~Person(){}

    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }
    void print(){
     cout<<getName()<<endl;
     cout<<"Vice-Chancellor"<<endl;
     cout<<"American International University-Bangladesh"<<endl;
    }
};

class employee: virtual public Person{
protected:
    string eID;
public:
    employee(string n, string i):Person(n){
            eID = i;
    }
    ~employee(){}
     void seteId(string i){
        eID = i;
    }
    string getEId(){
         return eID;
    }

};

class student: virtual public Person{
protected:
    string ID;

public:
    student(string n,string i):Person(n){
        ID = i;
    }
    ~student(){}
    void setId(string i){
        ID = i;
    }
    string getId(){
         return ID;
    }
};
class scholarshipStudent:public student{
private:
    int amount;

public:
    scholarshipStudent(string n,string i,int a):student(n,i),Person(n){
        amount = a;
    }
    ~scholarshipStudent(){}
    void setAmount(int a){
        amount = a;
    }
    int getAmount(){
         return amount;
    }
};
class faculty:public employee{
private:
    string dep;
 public:
    faculty(string n, string i,string d):employee(n,i),Person(n){
            dep = d;
    }
    ~faculty(){}
     void setDep(string d){
        dep = d;
    }
    string getDep(){
         return dep;
    }
};
class officer:public employee{
private:
    int salary;
 public:
    officer(string n, string i,int s):employee(n,i),Person(n){
            salary = s;
    }
    ~officer(){}
     void setSalary(int s){
        salary = s;
    }
    int getSalary(){
         return salary;
    }
};
class TA:public employee, public student{
private:
    int lecture;
    int research;
public:
    TA(string n, string i, int l,int r):employee(n,i),student(n,i),Person(n) {
             lecture = l;
             research = r;
    }
    ~TA(){}
    void setLecture(int l){
         lecture = l;
    }
    void setResearch(int r){
         research = r;
    }
    int getLecture(){
        return lecture;
    }
    int getResearch(){
        return research;
    }

};
int main(){

   Person P("Dr. Carmen Z.Lamogna");
   P.print();
   cout<<endl;

   employee e("Jafar Ullah","21563145");
   cout<<"Employee name: "<<e.getName()<<endl;
   cout<<"Employee ID: "<<e.getEId()<<endl;
   cout<<endl;

   student s1("Fatema Akter Luvna","22-56246-2");
   cout<<"Student name: "<<s1.getName()<<endl;
   cout<<"Student ID: "<<s1.getId()<<endl;
   cout<<endl;

   scholarshipStudent s2("Hedayet Ullah Patwary","22-687531-2",75);
   cout<<"Scholarship student name: "<<s2.getName()<<endl;
   cout<<"Scholarship student ID: "<<s2.getId()<<endl;
   cout<<"Percentage of scholarship is "<<s2.getAmount()<<"%"<<endl;
   cout<<endl;

   faculty f("Syeda Anika Tasnim","21321563","CSE");
   cout<<"Faculty name: "<<f.getName()<<endl;
   cout<<"Faculty ID: "<<f.getEId()<<endl;
   cout<<"Department: "<<f.getDep()<<endl;
   cout<<endl;

   officer o("Irfanuzzaman Irfan","56256362",50000);
   cout<<"Officer name: "<<o.getName()<<endl;
   cout<<"Officer ID: "<<o.getEId()<<endl;
   cout<<"Salary: "<<o.getSalary()<<" Taka"<<endl;
   cout<<endl;

   TA t("Kamruzzaman Kamrul","15246321",3,4);
   cout<<"TA name: "<<t.getName()<<endl;
   cout<<"TA ID: "<<t.getId()<<endl;
   cout<<"Lecture time "<<t.getLecture()<<" hour"<<endl;
   cout<<"Research time "<<t.getResearch()<<" hour"<<endl;

   return 0;
}

