// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;
//forward declaration
class Distance_1;
class Distance {
    private:
        int meter;
        
        // friend function
        friend int addFive(Distance, Distance_1);

    public:
        int meter0;
        Distance() : meter(10), meter0(100), meter1(101) {}//constractor must be in public section

    protected:
        int meter1;
        
};

class Distance_1 {
    private:
        int meter;
        
        // friend function
        friend int addFive(Distance, Distance_1);

    public:
        Distance_1() : meter(100) {}
        
};

// friend function definition
int addFive(Distance d, Distance_1 d_1) {

    //accessing private members from the friend function
    d.meter += d_1.meter;
    return d.meter;
}

int main() {
    Distance D;
    Distance_1 D_1;
    cout << "Distance: " << addFive(D, D_1) << endl;
    cout << "Distance of D: " << D.meter0 << endl;
    //cout << "Distance of D_1: " << D_1.meter << endl;

    return 0;
}