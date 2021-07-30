// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
public:
    ~Vehicle()
	{
    cout << "Vehicle destroyed" << endl;
    }
public:
	vehiclePrint()
	{
	cout << "Inside Vehicle" << endl;
	}
};

// second base class
class FourWheeler {
public:
	FourWheeler()
	{
	cout << "This is a 4 wheeler Vehicle" << endl;
	}
protected:
	~FourWheeler(){
        cout << "FourWheeler destroyed" << endl;
    }
public:
	fourWheelerPrint()
	{
	cout << "Inside FourWheeler" << endl;
	}
};

// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {
public:
	Car()
	{
	cout << "This is a Car" << endl;
	}
public:
	~Car(){
        cout << "Car destroyed" << endl;
    }
public:
	carPrint()
	{
	cout << "Inside Car" << endl;
	}
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	obj.carPrint();
	obj.fourWheelerPrint();
	obj.vehiclePrint();
	return 0;
}
