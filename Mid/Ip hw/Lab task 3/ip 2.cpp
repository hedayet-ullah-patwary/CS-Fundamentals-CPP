#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

    int a[N];
    float sum=0,average;
    cout<<"Student marks:"<<endl;
    for(int i=0; i<N; i++){
            cout<<"Student["<<i<<"]="<<endl;
        cin>>a[i];
        sum=sum+a[i];

    }
    average=sum/N;
    cout<<"Total marks="<<sum<<endl;
    cout<<"Average="<<average<<endl;

    return 0;


}
