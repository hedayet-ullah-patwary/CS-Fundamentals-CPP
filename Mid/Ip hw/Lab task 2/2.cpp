#include<iostream>
using namespace std;
int main()
{
    int m,factorial=1;
    cout<<"Enter a number:";
    cin>>m;

    for(int i=1;i<=m;i++){
        factorial=factorial*i;
    }
    cout<<"This is your factorial number:"<<factorial;
    return 0;
}
