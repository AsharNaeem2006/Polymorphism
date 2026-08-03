#include <iostream>
using namespace std;

class SmartDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class Fan : public SmartDevice {
public:
    void turnOn() override {
        cout << "Fan ON\n";
    }

    void turnOff() override {
        cout << "Fan OFF\n";
    }
};

class Light : public SmartDevice {
public:
    void turnOn() override {
        cout << "Light ON\n";
    }

    void turnOff() override {
        cout << "Light OFF\n";
    }
};

int main() {
    Fan f;
    Light l;

    f.turnOn();
    l.turnOn();

    f.turnOff();
    l.turnOff();
}