#include<string>

using namespace std;

class customers;

class customers{
    public:
  string name;
  int amount;
  customers();
  void set_customer_name(string name);
  void set_customer_amount(int amount);
};

customers :: customers(){
  name =  "your_name";
  amount = 0;
}
void customers :: set_customer_name(string name){
  this->name = name;
}
void customers :: set_customer_amount(int amount){
  this->amount = amount;
}
