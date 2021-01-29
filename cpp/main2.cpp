/*if we donot use virtual keyword then constructor of ‘great_p’ is called two times.
Destructor of ‘great_p’ will also be called two times when object ‘child_1’ is destructed.
So object ‘child_1’ has two copies of all members of ‘great_p’, this causes ambiguities.*/
/*when we will use virtual, then default constuctor of great_p is called only.....not any paramrtric constructor*/
/*In general, it is not allowed to call the grandparent’s constructor directly,
it has to be called through parent class. It is allowed only when ‘virtual’ keyword is used.*/
#include<iostream>
using namespace std;


class great_p{
  int i = 1000;
public:
  great_p(){
    cout<<"constructor of great_p\n";
  }
  great_p(int a){
    cout<<"constructor(paramrtric) of great_p\n";
  }
  void show(){
    cout<<i<<"\n";
  }
};

class p1 :  virtual public great_p{
public:
  p1(int z) : great_p(z){
    cout<<"constructor of p1 is called\n";
  }
};

class p2 : virtual public great_p{
public:
  p2(int y) : great_p(y){
    cout<<"constructor of p2 is called\n";
  }
};

class c1 : public p1, public p2{//this class will call constructor of all parents and grandparents
public:
  c1(int x) : p1(x), p2(x), great_p(x){//in this way we can call paramrtric constructor of parent and grand_parent
    cout<<"constructor of c1 is called\n";
  }
};



class A
{
int x;
public:
  int y;
  A(){
   cout<<"constructor of A is called\n";
  }
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  int b;
  B()  {
      cout<<"constructor of B is called\n";
      setX(10); }
};

class C: virtual public A
{
public:
  int c;
  C()  {
      cout<<"constructor of C is called\n";
      setX(20); }
};

class D: public C, public B {//this will set x = 10, because it will call constructor of "C" and then the constructor of "B".
public:
  int d;
};



int main(){
  c1 child_1(10);
  child_1.show();
  D d;
  d.print();
  D d_1;
  d_1.B::y = 1;//Avoiding ambiguity using scope resolution operator
  d_1.C::y = 10;
  d_1.b = 100;
  d_1.c = 1000;
  d_1.d = 10000;
  cout<< "\n A from ClassB  : "<< d_1.B::y;
  cout<< "\n A from ClassC  : "<< d_1.C::y;
  cout<< "\n B : "<< d_1.b;
  cout<< "\n C : "<< d_1.c;
  cout<< "\n D : "<< d_1.d;

  return 0;
}
