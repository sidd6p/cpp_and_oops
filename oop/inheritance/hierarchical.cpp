// C++ program to implement
// Hierarchical Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle
{
protected:
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


// first sub class
class Car: public Vehicle
{
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

// second sub class
class Bus: public Vehicle
{
public:
	Bus()
	{
	cout << "This is a Bus" << endl;
	}
public:
	~Bus(){
        cout << "Bus destroyed" << endl;
    }
public:
	busPrint()
	{
	cout << "Inside Bus" << endl;
	}	
};

// main function
int main()
{
	// creating object of sub class will
	// invoke the constructor of base class
	Car obj1;
	Bus obj2;
	obj1.carPrint();
	obj1.vehiclePrint();
	obj2.busPrint();
	obj2.vehiclePrint();
	return 0;
}
