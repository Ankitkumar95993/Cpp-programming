#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;

    }
};

class Humar{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};

class hybrid : public Animal, public Humar{
       


};

int main(){

    hybrid obj1;
    obj1.speak();
    obj1.bark();

}