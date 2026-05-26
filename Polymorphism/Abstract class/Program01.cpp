#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
    string name;
    int age;
    public:
    Person(string n,int a)
    {
        name=n;
        age=a;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    virtual void print()=0;
};
class student:public Person{
    private:
    int id;
    float gpa;
    public:
    student(string n,int a,int i,float g):Person(n,a),id(i),gpa(g){
    };
    void print()
    {
        cout << "\nStudent Details : \n";
        cout << "Name : " <<getname()<<"\n";
        cout << "Age : " << getage()<<"\n";
        cout << "Student id : "<<id <<"\n";
        cout << "Gpa : "<<gpa<<"\n";

    }
    int getid()
    {
        return id;
    }    
    float getgpa()
    {
        return gpa;
    }

};    
class Regular_student:public student{
    private:
    string School_name;
    int fee;
    public:
    Regular_student(string n,int a,int id,float g,string sn,int f):student(n,a,id,g),
    School_name(sn),fee(f){

    };
    void print()
    {
        cout <<"\n Regular Student details \n";
        cout << "Name : "<<getname()<<"\n";
        cout << "Age : " <<getage()<<endl;
        cout << "Student id : "<<getid()<<endl;
        cout << "Gpa : " << getgpa()<<endl;
        cout << "School Name : "<<School_name<<endl;
        cout << "fee : "<<fee<<"rs"<<endl;
    }
};
class Private_student:public student{
    private:
    string address ;
    int fee;
    public :
    Private_student(string n,int a,int id,float g,string add,int f):student(n,a,id,g),
    address(add),fee(f){

    };
    void print()
    {
        cout <<"\n Private Student details \n";
        cout << "Name : "<<getname()<<"\n";
        cout << "Age : " <<getage()<<endl;
        cout << "Student id : "<<getid()<<endl;
        cout << "Gpa : " << getgpa()<<endl;
        cout << "Address of Student : "<<address<<endl;
        cout << "fee : "<<fee<<"rs"<<endl;
    }
};
int main()
{
    Person *P1;
    Person *P2;
    Regular_student RS1("Ashar",19,25390,3.55,"Cust",12500);
    Private_student PS1("Ali",16,23100,3.66,"Kahuta",120);
    P1=&RS1;
    P2=&PS1;
    P1->print();
    P2->print();
    return 0;
}