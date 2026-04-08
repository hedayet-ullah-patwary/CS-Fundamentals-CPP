#include<iostream>
using namespace std;

int main(){


 int choice;
 float a,b,r,area;
 cout<<"Enter 1 for find area of circle"<<endl;
  cout<<"Enter 2 for find area of rectangle"<<endl;
  cout<<"Enter 3 for find area of triangle"<<endl;
  cout<<"Enter 4 for find area of square"<<endl;
  cin>>choice;

  switch(choice){
      case 1:{
        cout<<"Enter the radius of circle: "<<endl;
        cin>>r;
        area=3.14*r*r;
        cout<<"Area of circle is = "<<area<<endl;
        break;
      }

    case 2:{
        cout<<"Enter length and breadth of rectangle"<<endl;
        cin>>a>>b;
        area=a*b;
        cout<<"Area of rectangle is = "<<area<<endl;
    break;
      }
      case 3:{
        cout<<"Enter the base and height of triangle"<<endl;
        cin>>a>>b;

        area=0.5*a*b;
        cout<<"Area of triangle is = "<<area<<endl;
        break;
      }
      case 4:{
        cout<<"Enter the side of square"<<endl;
        cin>>a;
        area=a*a;
        cout<<"Area of square is = "<<area<<endl;
      break;
      }

      default: cout<<"Invalid choice"<<endl;
  }
  return 0;

}








