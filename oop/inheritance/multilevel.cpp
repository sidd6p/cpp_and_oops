// C++ program to implement
// Multilevel Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle{
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

// first sub_class derived from class vehicle
class fourWheeler: public Vehicle{
public:
	fourWheeler()
	{
	cout<<"Objects with 4 wheels are vehicles"<<endl;
	}
public:
	/*~FourWheeler(){
        cout << "FourWheeler destroyed" << endl;
    }*/
public:
	fourWheelerPrint()
	{
	cout << "Inside FourWheeler" << endl;
	}
};
// sub class derived from the derived base class fourWheeler
class Car: public fourWheeler{
public:
	Car()
	{
	cout<<"Car has 4 Wheels"<<endl;
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
	//creating object of sub class will
	//invoke the constructor of base classes
	Car obj;
    obj.carPrint();
    obj.fourWheelerPrint();
    obj.vehiclePrint();
	return 0;
}
