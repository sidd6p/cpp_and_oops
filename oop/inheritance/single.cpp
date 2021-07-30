// C++ program to explain
// Single inheritance
//destractor and constractor should be ONLY public but destractor and constractor of base class can be protected 
#include <iostream>
using namespace std;

// base class
class Vehicle {
    protected:
        Vehicle()
        {
        cout << "This is a Vehicle" << endl;
        }
    public:
        ~Vehicle(){
            cout << "Vehicle destroyed" << endl;
        }
};

// sub class derived from a single base classes
class Car: public Vehicle{
    public:
        Car(){
         cout << "This is car" << endl;
        }
    public:
        ~Car(){
            cout << "Car destroyed" << endl;
        }
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
    //Vehicle V; error as constractor is protected
	return 0;
}
