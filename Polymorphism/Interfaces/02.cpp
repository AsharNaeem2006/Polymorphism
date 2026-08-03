#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;
};

class FullTimeEmployee : public Employee {
    double salary;

public:
    FullTimeEmployee(double s) {
        salary = s;
    }

    double calculateSalary() override {
        return salary;
    }
};

class PartTimeEmployee : public Employee {
    int hours;
    double rate;

public:
    PartTimeEmployee(int h, double r) {
        hours = h;
        rate = r;
    }

    double calculateSalary() override {
        return hours * rate;
    }
};

int main() {
    FullTimeEmployee e1(80000);
    PartTimeEmployee e2(100, 500);

    cout << "Full Time Salary = " << e1.calculateSalary() << endl;
    cout << "Part Time Salary = " << e2.calculateSalary() << endl;
}