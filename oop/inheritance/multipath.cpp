// C++ program demonstrating ambiguity in Multipath
// Inheritance

#include <iostream>
using namespace std;
class ClassA {
public:
	int a;
protected:
    ClassA(){
        cout << "ClassA created" << endl;
    }
protected:
    ~ClassA(){
        cout << "ClassA destroyed" << endl;
    }
};

class ClassB : virtual public ClassA {
//class ClassB : public ClassA {
public:
	int b;
protected:
    ClassB(){
        cout << "ClassB created" << endl;
    }
public:
    ~ClassB(){
        cout << "ClassB destroyed" << endl;
    }
};

class ClassC :virtual public ClassA {
//class ClassC : public ClassA {
public:
	int c;
public:
    ClassC(){
        cout << "ClassC created" << endl;
    }
protected:
    ~ClassC(){
        cout << "ClassC destroyed" << endl;
    }
};

class ClassD : public ClassB, public ClassC {
public:
	int d;
public:
    ClassD(){
        cout << "ClassD created" << endl;
    }
public:
    ~ClassD(){
        cout << "ClassD destroyed" << endl;
    }
};

int main()
{

	ClassD obj;

	obj.a = 10;				 //Statement 1, Error
	obj.a = 100;				 //Statement 2, Error

	//obj.ClassB::a = 10; // Statement 3
	//obj.ClassC::a = 100; // Statement 4

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout << "\n A from ClassB : " << obj.ClassB::a;
	cout << "\n A from ClassC : " << obj.ClassC::a;

	cout << "\n B : " << obj.b;
	cout << "\n C : " << obj.c;
	cout << "\n D : " << obj.d;
    cout << endl;
}
