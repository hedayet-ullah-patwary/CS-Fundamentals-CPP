#include<iostream>
using namespace std;
class Box {

   public:
       float length,width,height;

       Box(){  };
       Box(float l,float w,float h){
       length = l;
       width = w;
       height = h;

       }

       Box operator + (Box obj){
           Box res;
           cout<<"The new combined box's"<<endl;
           res.length= length + obj.length;
           res.width= width + obj.width;
           res.height= height + obj.height;
           return res;

       }
       Box operator * (Box obj){
           Box res;
           cout<<"Multilplication"<<endl;
           res.length= (length*obj.length);
           res.width= (width*obj.width);
           res.height= (height*obj.height);
           return res;
       }
       void print(){
          cout<<"length : "<<length<<endl;
          cout<<"width : "<<width<<endl;
          cout<<"height : "<<height<<endl;
          cout<<endl;
       }

};

int main(){
   Box b1(4,5,6),b2(7,8,9);
   b1.print();
   b2.print();

    Box b3 = b1 + b2;
    b3.print();

     Box b4 =  b1 * b2;

    b4.print();

    return 0;
    }



