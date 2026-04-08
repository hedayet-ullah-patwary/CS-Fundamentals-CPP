#include<iostream>
using namespace std;

class Employee{
protected:
    int employeeID;
    string employeeName;
    double salary;

public:
    Employee(){}
    Employee(int el,string e2,double s){
    }

    void setEmployeeID(int e1){
         employeeID = e1;
    }
     void setEmployeeName(string e2){
         employeeName = e2;
    }
     void setSalary(double s){
         employeeID = s;
    }
    int getEmployeeID(){
        return employeeID;
    }
    string getEmployeeName(){
        return employeeName;
    }
    void showEmployeeDetails(){
        cout<<employeeID<<endl;
        cout<<employeeName<<endl;
        cout<<salary<<endl;
    }
};
class Salesman:public Employee{
protected:
    string salesArea;
public:
    Salesman(int e1,string e2,double s,string a):Employee(e1,e2,s){
    }
    void setSalesArea(string a){
          salesArea = a;
    }
    string getSalesArea(){
         return salesArea;
    }
    void showSaleamanDetails(){
    }

};
class Manager:public Employee{
protected:
    string territoryName;
public:
    Manager(int e1,string e2,double s,string t):Employee(e1,e2,s){

    }
    void setTerritoryName(string t){
           territoryName = t;
    }
    string getTerritoryName(){
           return territoryName;
    }
    void showManagerDetails(){

    }

};
int main(){
    Employee E(1256332,"Hedayet",20000);
    cout<<E.getEmployeeName()<<endl;


    Salesman s1(456523,"Abdullah",15000,"Kuratoli");
    cout<<s1.getEmployeeName()<<endl;





   return 0;
}
