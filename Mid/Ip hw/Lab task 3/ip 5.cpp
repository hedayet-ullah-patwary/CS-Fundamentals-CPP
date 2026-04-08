#include<iostream>
using namespace std;

int main(){

int N,i;
int a[25],min1,min2;

cout<<"Enter size of the array:"<<endl;
cin>>N;
cout<<"Enter elements in the array:"<<endl;
for(i=0;i<N; i++){
    cin>>a[i];
    }
    if(a[0]<a[1]){
        min1=a[0];
        min2=a[1];
    }

    else
    {
        min1=a[1];
        min2=a[0];
    }

for(i=2;i<N;i++){
    if(a[i]<min1){
        min2=min1;
        min1=a[i];
    }

    else if(a[i]<min2){
        min2=a[i];
    }
}

    cout<<"Frist smallest number:"<<min1<<endl;
    cout<<"Second smallest number:"<<min2<<endl;

}











