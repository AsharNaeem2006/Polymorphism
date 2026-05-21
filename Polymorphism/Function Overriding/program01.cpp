#include<iostream>
using namespace std;
class Animal{
    public:
   virtual void makesound()
    {
        cout << "Animals sound\n";
    }
};
class Dog:public Animal{
    public:
    void makesound()
    {
        cout << "Dog ->wooo woo\n";
    }
};
class Cat:public Animal{
    public:
    void makesound()
    {
        cout <<"Cat -> Miouuu\n";
    }
};
class Cow:public Animal{
    public:
    void makesound()
    {
        cout<< "Cow->gooo\n";
    }
};
int main()
{
    Animal *A1;
   A1=new Dog();
   A1->makesound();
   Animal *A2;
   A2=new Cat();
   A2->makesound();
   Animal *A3;
   A3=new Cow();
   A3->makesound();

   delete A1;
   delete A2;
   delete A3;

}