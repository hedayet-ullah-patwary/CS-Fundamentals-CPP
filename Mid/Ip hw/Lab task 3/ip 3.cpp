#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter array size:"<<endl;
    cin>>N;

    int a[N];

    cout<<"Enter number:"<<endl;
    for(int i=0; i<N; i++){
        cin>>a[N];
        if(a[N]%2==0){
            cout<<"Even number"<<endl;

        }
        else{
            cout<<"Odd number"<<endl;
        }
    }
    return 0;
}
