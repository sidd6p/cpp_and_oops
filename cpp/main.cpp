#include<iostream>
#include"Object_class.h"
using namespace std;
int main(){
  cout<<"Started";
  customers c1;
  customers *c2 = new customers();
  c1.set_customer_name("siddhartha");
  c1.set_customer_amount(100);
  c2->set_customer_name("sarthak");
  c2->set_customer_amount(1000);
  cout<<c1.get_customer_name();
  cout<<c1.get_customer_amount();
  cout<<c2->get_customer_name();
  cout<<c2->get_customer_amount();
  cout<<"Total number of customers = "<<
  c1.~customers();
  c2->~customers();
  delete c2;
  return 0;
}
