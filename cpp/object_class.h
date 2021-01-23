#include<string>

using namespace std;

class customers;

class customer{
  string name;
  int amount;
public:
  customer();
  void set_customer_name(string name);
  void set_customer_amount(int amount);
};

customer :: customer(){
  name =  "your_name";
  amount = 0;
}
customer :: set_customer_name(string name){
  this->name = name;
}
customer :: set_customer_amount(int amount){
  this->amount = amount;
}
