// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

// no need of forward declaration

class ClassB {
    private:
        int numB;

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}
        int add();

};
class ClassA {
    private:
        int numA;

        // friend class declaration
        friend int ClassB::add();

    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
};

int ClassB::add() {
        ClassA objectA;
        return objectA.numA + numB;
    }

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}