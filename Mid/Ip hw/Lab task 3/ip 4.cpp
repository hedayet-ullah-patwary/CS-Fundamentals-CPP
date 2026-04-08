#include<iostream>
using namespace std;

int main(){

int N,i;
int a[25],max1,max2;

cout<<"Enter size of the array:"<<endl;
cin>>N;
cout<<"Enter elements in the array:"<<endl;
for(i=0; i<N; i++){
    cin>>a[i];
}
for(i=0; i<N;i++){
    if(a[i]>max1){
        max2=max1;
        max1=a[i];
    }

    else if(a[i]>max2){
        max2=a[i];
    }

}
    cout<<"First largest number:"<<max1<<endl;
    cout<<"Second largest number:"<<max2<<endl;


}
