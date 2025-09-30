//Tanmay Ambudkar
#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    public:
    string company="Toyota";
    void type(){
        cout<<"Fortuner"<<endl;
    }
};
class Specs {
    public:
    string mileage="15 kmpl";
    void colour(){
        cout<<"White"<<endl;
    }
};
class Car: public Vehicle, public Specs {
    public:
    string seater="4 seater";
};

int main(){
    Car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE: "<<f2.mileage<<endl;
}