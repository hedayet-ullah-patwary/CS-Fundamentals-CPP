#include<iostream>
using namespace std;


class Rectangle{

private:
    int length=0;
    int breadth=0;

public:
    int setlength (int a)
    {
        length=a;
        return length;
    }
    int setbreadth (int b)
    {
        breadth=b;
        return breadth;

    }
    void Rectanglearea()
    {
        cout<<"box ="<<length*breadth<<endl;
    }


};

int main ()
{
    Rectangle r1;
    r1.setlength(2);
    r1.setbreadth(4);
    r1.Rectanglearea();
    return 0;



}


