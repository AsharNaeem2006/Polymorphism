#include<iostream>
using namespace std;
class calculate{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
    string add(string a,string b)
    {
        return a+b;
    }
};
int main()
{
    calculate A1;
    cout <<A1.add(2,4)<<endl;  //2  integer 
    cout <<A1.add(2.3,3.5)<<endl; // 2 double
    cout <<A1.add(4,7,8)<<endl;  // 3 integer
    cout <<A1.add("Ashar","Naeem")<<endl; // 2 strings
}