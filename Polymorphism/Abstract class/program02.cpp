#include<iostream>
#include<string>
using namespace std;
 // abstract class 
 class Animal{
    private:
    string name;
    string zoo;
    public:
    Animal(string name,string zoo)
    {
        this->name=name;
        this->zoo=zoo;
    }
    virtual void show()=0;
    string getname()
    {
        return name;
    }
    string  getzoo()
    {
        return zoo;
    }
    
 };
 class Bird:public Animal{
    private:
    bool flying;
    public:
    Bird(string n,string z,bool f):Animal(n,z),flying(f){

    };
    void show()
    {
        cout << "\n Bird Details \n";
        cout << "Name : " <<getname()<<"\n";
        cout << "Zoo : " << getzoo()<<"\n";
        cout << "Flying << : "<<(flying ? "Yes" :"Yes")<<"\n";
    }
 };
 class Reptile:public Animal{
    private:
    int length;
    public:
    Reptile(string n,string z,int l):Animal(n,z),length(l){};
    void show()
    {
        cout << "\n Reptile Details \n";
        cout <<  "Name : " << getname()<<"\n";
        cout << "Zoo : "<<getzoo()<<"\n";
        cout << "Length : "<<length<<" cm"<<"\n"; 
    }
 };
int main()
{
    Bird B1("Falcon","Islamabad",true);
    Reptile R1("Crocodile","Rawalpindi",45);
    Animal *A1;
    Animal *A2;
    A1=&B1;
    A2=&R1;
    A1->show();
    A2->show();
    return 0;
}