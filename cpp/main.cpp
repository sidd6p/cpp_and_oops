#include<iostream>
#include"Object_class.h"
using namespace std;
int main(){
  cout<<"Started"<<endl;
  customers c1;
  customers *c2 = new customers();

  c1.set_customer_name("siddhartha");
  c1.set_customer_amount(100);
  c2->set_customer_name("sarthak");
  c2->set_customer_amount(1000);

  cout<<c1.get_customer_name()<<"\t";
  cout<<c1.get_customer_amount();
  cout<<"\n";
  cout<<c2->get_customer_name()<<"\t";
  cout<<c2->get_customer_amount();
  cout<<"\n";
  cout<<"Total number of customers = "<<customers::total_customer();

  c1.~customers();
  c2->~customers();
  delete c2;
  return 0;
}
