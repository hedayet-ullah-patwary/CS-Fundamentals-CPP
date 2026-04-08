#include<iostream>
using namespace std;

class box{

private:
    int length=0;
    int breadth=0;
    int height=0;
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
    int setheight (int h)
    {
        height=h;
        return height;

    }
    void Volumeofbox()
    {
        cout<<"box ="<<length*breadth*height<<endl;
    }


};

int main ()
{
    box r1;
    r1.setlength(2);
    r1.setbreadth(4);
    r1.setheight(10);
    r1.Volumeofbox();
    return 0;



}


