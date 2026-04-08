#include<iostream>
using namespace std;

class employee{
private:
    string name="";
    string joiningyear="";
    string salary="";
    string address="";

public:
    void setname(string n)
    {
        name=n;
    }
    void setjoiningyear(string j)
    {
        joiningyear=j;
    }
    void setsalary(string s)
    {
        salary=s;
    }
    void setaddress(string a)
    {
        address=a;
    }
    void showemployeeInfo()
    {
        cout<<name<<"   ";
        cout<<joiningyear<<"   ";
        cout<<salary<<"   ";
        cout<<address<<"   "<<endl;
    }
};

int main()
{
    cout<<"Name    Joining   Salary   Adress"<<endl;
    employee e1;
    e1.setname("Robert");
    e1.setjoiningyear("1994");
    e1.setsalary("0000");
    e1.setaddress("64C-wallsStreat");
    e1.showemployeeInfo();

    employee e2;
    e2.setname("Sam");
    e2.setjoiningyear("2000");
    e2.setsalary("0000");
    e2.setaddress("68D-wallsStreat");
    e2.showemployeeInfo();

    employee e3;
    e3.setname("John");
    e3.setjoiningyear("1999");
    e3.setsalary("0000");
    e3.setaddress("26D-wallsStreat");
    e3.showemployeeInfo();

    return 0;
}



