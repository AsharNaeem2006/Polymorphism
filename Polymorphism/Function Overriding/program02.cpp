#include<iostream>
using namespace std;
class Employee{
    private:
    int empid;
    string empname;
    public:
    Employee()
    {

    }
    Employee(int id,string name){
        id=empid;
        empname=name;
    }
    virtual int calculate_salary(int base,int bonus)
    {
        return base+bonus;
    }
    virtual void display()
    {
        cout << "Employeee----\n";
        cout << "Employee id : "<<empid<<"\n";
        cout << "Employee name : "<<empname<<endl;
    }
};
class permanent:public Employee{
    private:
    int basic_salary;
    public:
    permanent(){};
    int calculate_salary(int basic_salary,int allowence)
    {
        this->basic_salary=basic_salary;
        return basic_salary+allowence;

    }
    void display()
    {
        cout << "\n---Parmanent enployee---\n";
        cout << "Basic salary of the permanent employee :"<<basic_salary<<"\n";
    }
};
class contract_employee:public Employee{
    private:
    int hourlyrate;
    public:
    int  calculate_salary(int hours,int allownence)
    {
        hourlyrate=hours;
        return hourlyrate+allownence;
    }
    void display()
    {
        cout << "\n-----Contract Employee----\n";
        cout << "Hourly rate of contract employee : "<<hourlyrate<<"\n";
    }
};
int main()
{
        Employee *E;
        E=new permanent();
        E->calculate_salary(234,545);
        E->display();
        Employee *P;
        P=new contract_employee();
        P->calculate_salary(112,789);
        P->display();
        delete P;
        delete E;

}
