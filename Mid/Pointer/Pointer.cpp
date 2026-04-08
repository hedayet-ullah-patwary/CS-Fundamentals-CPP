#include<iostream>
using namespace std;

int main(){

    int x,y=10;
    x=5; // 101
    cout<<"Value of X : "<<x<<endl;
    cout<<"Address of X : "<<&x<<endl;
    cout<<"Address of Y : "<<&y<<endl;

    //if we want save address of integer type of data
    //we will need integer type of pointer.

    int *ax = &x;

    int *ay = &y;
    int *p;
    p= NULL; // NULL and 0 is not same thing.

    cout<<endl;

    cout<<"Address of X : "<<&x<<endl;
    cout<<"Address of X : "<<ax<<endl;
    cout<<"Value of X : "<<x<<endl;
    cout<<"Value of X : "<<*ax<<endl;
    cout<<"Address of Y : "<<&y<<endl;
    cout<<"Address of Y : "<<ay<<endl;
    cout<<"Value of Y : "<<y<<endl;
    cout<<"Value of Y : "<<*ay<<endl;


    // illegal access of memory using pointer
    *ax = 20;
    *(ax-1)=30;
    *(ay+1)=0;
    cout<<"Value of X : "<<x<<endl;
    cout<<"Value of Y : "<<y<<endl;

//******** Dynamic Array Declaration ******//
    int size;
    cin>>size;
    int *arr = new int [size];//dynamic array declaration
    arr[2] = 20;
    cout<<arr[20]<<endl;

    delete arr;


    return 0;
}
