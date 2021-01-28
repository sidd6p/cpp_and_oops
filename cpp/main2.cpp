#include<iostream>
using namespace std;

class great_p{
  int i = 10;
public:
  void show(){
    cout<<i;
  }
};

class p1 : virtual public great_p{

};

class p2 : virtual public great_p{

};

class c1 : public p1, public p2{

};

int main(){
  c1 child_1;
  child_1.show();
  return 0;
}
