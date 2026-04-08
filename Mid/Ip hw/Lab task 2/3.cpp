#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c = 0, n;
    cout<<" Enter a number: ";
    cin>>n;
    cout<<"Fibonacci series: " <<a<<" , "<<b<<" , ";
    c=a+b;

    while(c<=n){
        cout<<c<< " , ";
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
