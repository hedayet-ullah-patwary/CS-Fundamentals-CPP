#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char word [] = {'H','E','\0'};
    char s1[] = "STR1";
    char s2[] = "STR2";

    for(int i=0;i<12;i++){
        cout<<word[i];
    }
    cout<<endl;

    cout<<word<<endl;
    cout<<&word[0]<<endl;
    cout<<"Length of string :"<<strlen(word)<<endl;

    strcat(s1,s2);
    cout<<s1<<endl;
    cout<<strcmp("HE","SHE")<<endl;

    char s3[] = "Hello";
    char s4[] = "World";

    cout<<strchr(s3,'l')<<endl;
    cout<<strstr(s3,"ll")<<endl;
    cout<<sizeof(s3)<<endl;
    cout<<strlen(s3);

return 0;
}
