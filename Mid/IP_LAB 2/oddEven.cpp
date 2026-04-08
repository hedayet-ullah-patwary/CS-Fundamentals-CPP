#include<iostream>
using namespace std;

int main ()
{
    int number_to_test, remainder;

    cout<<"Enter your number to be tested: ";

    cin>>number_to_test;


        if(number_to_test%2 == 0){
            cout<<"Inside if's body"<<endl;
            cout<<"It is an Even Number"<<endl;
        }
        else{
            cout<<"Inside else body"<<endl;
            cout<<"It is an Odd Number"<<endl;
        }



return 0;
}

