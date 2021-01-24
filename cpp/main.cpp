#include<iostream>
#include"Object_class.h"
using namespace std;
int main(){
  cout<<"Started";
  customers c1;
  c1.set_customer_name("siddhartha");
  c1.set_customer_amount(100);
  cout<<c1.get_customer_name();
  cout<<c1.get_customer_amount();
  return 0;
}
