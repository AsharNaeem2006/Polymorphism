#include<iostream>
#include<string>
using namespace std;
class Geomatry_shapes{
    public:
    virtual void show()=0;
    virtual double calculateArea()=0;
};
class Rectangle:public Geomatry_shapes{
    private:
    double length;
    double width;
    public:
    void length_setter(double l)
    {
        length=l;
    }
    void width_setter(double w)
    {
        width=w;
    }
    double length_getter()
    {
        return length;
    }
    double width_getter()
    {
        return width;
    }
    void show()
    {
        cout << "\t\n Rectangle details : \n";
        cout << "Length : " <<length<<endl;
        cout << "Width :  "<<width<<endl;
    }
    double calculateArea()
    {
        return length*width;
    }
};
class cuboid:public Rectangle{
    private:
    double height;
    public :
    void setheight(double h)
    {
        height=h;
    }
    double getheight()
    {
        return height;
    }
    double calculateArea(){
        return length_getter()*width_getter()*height;
    }
    void show()
    {
        cout << "\t\n  cuboid details \n";
        cout << "Length : " <<length_getter()<<endl;
        cout << "Width getter : "<<width_getter()<<endl;   
        cout << "Height : " <<height<<endl;     
    }

};

int main()
{
    Geomatry_shapes *G1;
    Geomatry_shapes *G2;
    Rectangle R;
    R.length_setter(12.9);
    R.width_setter(84.0);
    cuboid C;
    C.length_setter(8.66);
    C.width_setter(84.0);
    C.setheight(34.33);
    G1=&R;
    G2=&C;
    cout << "Rectangle Area : "<<G1->calculateArea()<<endl;
    cout << "Cuboid Area : "<<G2->calculateArea()<<endl;
    G1->show();
    G2->show();

    return 0;
}