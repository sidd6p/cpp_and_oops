#include<iostream>
#include"object_class.h"

using namespace std;

int main(){

  cout<<"Started"<<endl;

  child_customer cc1;
  child_customer cc2("s_child", 1000);
  customer c1;
  customer *c2 = new customer();
  customer();//When the constructor is called explicitly the compiler creates a nameless temporary object and it is immediately destroyed.
  customer c5("sidd", 10000);
  c1.set_customer_name("siddhartha");
  cc1.set_customer_name("s_child_2");
  c1.set_customer_amount(100);
  cc1.set_customer_amount(10000);
  c2->set_customer_name("sarthak");
  c2->set_customer_amount(1000);
  admin a1;
  //a→b is essentially a shorthand notation for (*a).b,
  //if a is a pointer to an object, then a->b is accessing the property b of the object that a points to.

  customer c3 = c1;//copy constructor
  customer c4;
  c4 = (*c2);//assignment operator

  cout<<c1.get_customer_name()<<"\t";
  cout<<c1.get_customer_amount();
  cout<<"\n";
  cout<<c2->get_customer_name()<<"\t";
  cout<<c2->get_customer_amount();
  cout<<"\n";
  cout<<c3.get_customer_name()<<"\t";
  cout<<c3.get_customer_amount();
  cout<<"\n";
  cout<<c4.get_customer_name()<<"\t";
  cout<<c4.get_customer_amount();
  cout<<"\n";
  cout<<c5.get_customer_name()<<"\t";
  cout<<c5.get_customer_amount();
  cout<<"\n";
  cout<<cc1.get_customer_name()<<"\t";
  cout<<cc1.get_customer_amount();
  cout<<"\n";
  cout<<cc2.get_customer_name()<<"\t";
  cout<<cc2.get_customer_amount();
  cout<<"\n";

  c1.child_modify(cc1, 500);
  cout<<cc1.get_customer_name()<<"\t";
  cout<<cc1.get_customer_amount();
  cout<<"\n";

  a1.delete_user(c1);
  cout<<c1.get_customer_name()<<"\t";
  cout<<c1.get_customer_amount();
  cout<<"\n";

  total_customer();

  c1.~customer();//because of the explicit call to destructor, the destructor for c1 will be called twice.
  delete c2;//this will call destructor automatically, destructor will be called only once for object c2, since it is explicitly allocated in the memory.
  return 0;
}
