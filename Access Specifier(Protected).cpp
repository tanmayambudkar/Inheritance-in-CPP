//Tanmay Ambudkar
#include<iostream>
using namespace std;

class Parent {
    protected:
    int protectedValue;
public:
    Parent() : protectedValue(42) {}
};

class Child : public Parent {
public:
    void showProtected() {
        cout << "Protected value from Parent: " << protectedValue << endl;
    }
};

int main() {
    Child obj;
    obj.showProtected();
    return 0;
}