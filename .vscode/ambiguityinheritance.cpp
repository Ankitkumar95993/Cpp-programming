#include <iostream>
using namespace std;

class A
{

public:
    void func()
    {
        cout << "I am A" << endl;
    }

    void func(string name)
    {
        cout << "I am B" << endl;
    }

    int func(string name,int n)
    {
        cout << "I am C" << endl;
    }
};


class B{
    public:

    int a;
    int b;

    public:

    int add(){
        return a+b;
    }

    void operator+ (B &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output "<<value2-value1<<endl;
    }

    void operator() (){

        cout<<"mae bracket ho "<<this->a<<endl;
    }

    };


    class Animal{
        public:

        void speak(){
            cout<<"speaking"<<endl;

        }
    };

    class dog : public Animal{
        public:

        void speak(){
            cout<<"barking"<<endl;
        }
    };




// class B
// {
// public:
//     void func()
//     {
//         cout << "I am B" << endl;
//     }
// };

// class C : public A, public B
// {
// public:
//     void func1()
//     {
//         cout << "i am func1" << endl;
//     }
// };

int main()
{
    // C obj;
    // obj.A::func();
    // obj.B::func();

    // A obj;
    // obj.func();

    // B obj1,obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;

    // obj1();

   dog d;
   d.speak();

}
