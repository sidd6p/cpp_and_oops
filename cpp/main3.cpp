//https://www.geeksforgeeks.org/virtual-destructor/
//https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-c-set-1-introduction/
#include <iostream>
using namespace std;

class Base {
   public:
    virtual void do_nothing() = 0;//A pure virtual function is declared by assigning 0 in declaration.
    virtual void print() {
        cout << "Base Function" << endl;
    }
    virtual ~Base() = 0;
};
Base :: ~Base(){}//this is needed for using the virtual destructor.


class Derived : public Base {
   public:
    void do_nothing(){ cout<<"pure virtual function";}
    void print() {
        cout << "Derived Function" << endl;
    }
    ~Derived(){
     cout<<"destructor of derived is called";
     }

};

// CPP program to illustrate
// working of Virtual Functions
class base {
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base {
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
};


int main() {
    Derived derived1;
    // pointer of Base type that points to derived1
    Base* base1 = &derived1;
    // calls member function of Derived class
    base1->print();

    /*Base base2;
    Derived *derived2 = &base2;
    derived2->print();*/


    base* p;
    //base *p = new derived;
    derived obj1;
    p = &obj1;

    // Early binding because fun1() is non-virtual
    // in base
    p->fun_1();

    // Late binding (RTP)
    p->fun_2();

    // Late binding (RTP)
    p->fun_3();

    // Late binding (RTP)
    p->fun_4();
    /*p->fun_4(5);*/

    // Early binding but this function call is
    // illegal(produces error) becasue pointer
    // is of base type and function is of
    // derived class
    // p->fun_4(5);

    return 0;
}
