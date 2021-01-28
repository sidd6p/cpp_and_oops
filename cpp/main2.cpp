/*if we donot use virtual keyword then constructor of ‘great_p’ is called two times.
Destructor of ‘great_p’ will also be called two times when object ‘child_1’ is destructed.
So object ‘child_1’ has two copies of all members of ‘great_p’, this causes ambiguities.*/
/*when we will use virtual, then default constuctor of great_p is called only.....not any paramrtric constructor*/

#include<iostream>
using namespace std;

class great_p{
  int i = 10;
public:
  great_p(){
    cout<<"constructor of great_p\n";
  }
  void show(){
    cout<<i;
  }
};

class p1 :  virtual public great_p{
public:
  p1() : great_p(){
    cout<<"constructor of p1 is called\n";
  }
};

class p2 : virtual public great_p{
public:
  p2() : great_p(){
    cout<<"constructor of p2 is called\n";
  }
};

class c1 : public p1, public p2{
public:
  c1() : p1(), p2(){
    cout<<"constructor of c1 is called\n";
  }
};

int main(){
  c1 child_1;
 // child_1.show();
  return 0;
}
