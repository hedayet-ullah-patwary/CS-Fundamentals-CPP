#include<iostream>
using namespace std;
class Mobile{
private:
    string owner_name;
    string sim_number;
    float balance;
    string os_name;
    bool lock_status;

public:
    void setOwner_name(string o)
    {
        owner_name = o;
    }
    void setSim_number(string s)
    {
        sim_number = s;
    }
    void setBalance(float b)
    {
        balance = b;
    }
    void setOs_name(string n)
    {
        os_name = n;
    }
    void setLock_status(bool l)
    {
        lock_status = l;
    }

    Mobile(){
    owner_name="";
    sim_number="";
    balance=0;
    os_name="";
    lock_status=0;

    }
    Mobile(string o,string s,float b,string n,bool l){
    owner_name=o;
    sim_number=s;
    balance=b;
    os_name=n;
    lock_status=l;
    }
     ~Mobile(){}
    string getOwnername(){return owner_name;}
    string getSim_number(){return sim_number;}
    float getBalance(){return balance;}
    string getOs_name(){return os_name;}
    void print(){
    cout<<"Owner name: "<<owner_name<<endl;
    cout<<"Number: "<<sim_number<<endl;
    cout<<"Balance: "<<balance<<endl;
    cout<<"Os name: "<<os_name<<endl;
    cout<<"Lock status: "<<lock_status<<endl;
    }
    void sum();
};
void Mobile::sum()
    {
        float b;
        int y;
        cout<<"Recharge amount is: ";
        cin>>b;
        balance+=b;
        cout<<"Balance is: "<<balance<<endl;
        cout<<"Call duration time: ";
        cin>>y;
        cout<<"Current balance: "<<balance-(y*0.5)<<endl;
    }


int main()
{
    Mobile c1("Hedayet Ullah Patwary","018********",20,"Android",false);
    c1.print();
    c1.sum();

return 0;
}




