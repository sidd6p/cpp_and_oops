#include<iostream>
#include"Object_class.h"

using namespace std;

int main(){

  cout<<"Started"<<endl;

  child_customers cc1;
  customers c1;
  customers *c2 = new customers();
  customers();//When the constructor is called explicitly the compiler creates a nameless temporary object and it is immediately destroyed.
  customers c5("sidd", 10000);
  c1.set_customer_name("siddhartha");
  c1.set_customer_amount(100);
  c2->set_customer_name("sarthak");
  c2->set_customer_amount(1000);
  //a→b is essentially a shorthand notation for (*a).b,
  //if a is a pointer to an object, then a->b is accessing the property b of the object that a points to.

  customers c3 = c1;//copy constructor
  customers c4;
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

  cout<<"Total number of customers = "<<customers::total_customer()<<endl;

  c1.~customers();//because of the explicit call to destructor, the destructor for c1 will be called twice.
  delete c2;//this will call destructor automatically, destructor will be called only once for object c2, since it is explicitly allocated in the memory.
  return 0;
}
