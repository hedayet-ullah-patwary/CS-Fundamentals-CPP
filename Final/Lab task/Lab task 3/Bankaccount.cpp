#include<iostream>
using namespace std;
class Account{
private:
    string name;
    string accnum;
    float balance;
    string actype;

public:
    void setName(string n)
    {
        name = n;1
    }
     void setAccnum(string c)
    {
        accnum = c;
    }
     void setBalance(float b)
    {
        balance = b;
    }
    void setActype(string a)
    {
        actype = a;
    }
    Account(){}
    Account(string n,string c,float b,string a)
    {
        name=n;
        accnum=c;
        balance=b;
        actype=a;
    }
    ~Account(){}
    string getName(){return name;}
    string getAccnum(){return accnum;}
    float getBalance(){return balance;}
    string getactype(){return actype;}
    void print()
    {
        cout<<"Account Name: "<<name<<endl;
        cout<<"Account No: "<<accnum<<endl;
        cout<<"Account Balance: "<<balance<<endl;
        cout<<"Account Type: "<<actype<<endl;
    }
    void deposit();
    void withdraw();
    void transfer();
    void ShowAccountDetails();

};
void Account::deposit()
{
    int dep;
    cout<<"----------------------"<<endl;
    cout<<"Enter Deposit Amount: ";
    cin>>dep;
    balance+=dep;
}
void Account::withdraw()
{
    int wit;
    cout<<"Enter Withdraw Amount: ";
    cin>>wit;
    if(wit>balance)
    cout<<"Cannot Withdraw Amount: ";
    balance-=wit;
}
void Account::transfer()
{
    int tra;
    cout<<"Enter Transfer Amount: ";
    cin>>tra;
    if(tra>balance)
        cout<<"Cannot Transfer Because Their Have No Sufficient Money : ";
    balance-=tra;
}
void Account::ShowAccountDetails()
{
    cout<<"-----------------------"<<endl;
    cout<<"Account Name: "<<name<<endl;
    cout<<"Account Number. "<<accnum<<endl;
    cout<<"Balance: "<<balance<<endl;
}

int main()
{
    Account a1("Hedayet Ullah Patwary","4125632",4000,"Saving");
    a1.print();
    a1.deposit();
    a1.withdraw();
    a1.transfer();
    a1.ShowAccountDetails();

    return 0;
}



