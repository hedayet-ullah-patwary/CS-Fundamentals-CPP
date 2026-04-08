#include<iostream>
using namespace std;

int main(){

 //DataType VariableName
    int i; //int means integer
           //0,1,2,-5,-99,-555,34 etc
           //integer allocates 4 bytes of memory

    float f;//float means numeric values with decimal points
           //0.0,1.5,2.6,-5.0,-99.99,-555.5,34.0 etc
           //float allocates 4 bytes of memory
           //float can keep numbers till 7 decimal places

    double d;//double means numeric values with decimal points
           //0.0,1.5,2.6,-5.0,-99.99,-555.5,34.0 etc
           //double allocates 8 bytes of memory
           //double can keep numbers till 15 decimal places

    bool b;//bool means boolean
           //true,false,1,0
           //bool allocates 1 bytes of memory

    char c;//char means character
           //'A', 'e','2',' ','@' etc
           //ASCII character allocates 1 bytes of memory

    // age1, age2 ,age3, age, Age

    i = 3.1415;// = means assignment operator
          // it assigns values from right side to left side
    f = 3.14159265358979323;
    d = 3.14159265358979323;
    b = false;
    c = 'A';

    cout<<"DIFFERENT TYPES OF VARIABLE and DATA TYPES"<<endl;

    cout<<"Integer : "<< i <<endl;
    cout<<"Float : "<< f <<endl;
    cout<<"Double : "<< d <<endl;
    cout<<"Boolean : "<< b <<endl;
    cout<<"Character : "<< c <<endl;
    cout<<i<<endl;


    cin >> i;
    cout<<"You have entered "<< i <<endl;
    /*

    int a=3,b=7, c= 5, d = 2;
    if(a > b && b > c || b > d)
    {
        cout<< "True" <<endl;
    }
    else {
        cout<< "False" <<endl;
    }
*/

return 0;
}
