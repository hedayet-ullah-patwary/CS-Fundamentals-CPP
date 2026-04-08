#include<iostream>
using namespace std;
class Account{
private:
    string name;
    string accnum;
    string NID;
    float balance;

public:
    void setName(string n)
    {
        name = n;
    }
     void setAccnum(string c)
    {
        accnum = c;
    }
     void setNid(string i)
    {
        NID = i;
    }
     void setBalance(float b)
    {
        balance = b;
    }

    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<accnum<<endl;
        cout<<"NID: "<<NID<<endl;
        cout<<"Account Balance: "<<balance<<endl;

    }

        void sum(float balance, int acc)
    {
        cout<<"Total Balance: "<<acc+balance<<endl;
    }

};

int main()
{
    Account a1,acc;
    a1.setName("Hedayet Ullah Patwary");
    a1.setAccnum("23421748");
    a1.setNid("879554566");
    a1.setBalance(511);
    a1.print();
    acc.sum(511,14) ;

    return 0;
}




