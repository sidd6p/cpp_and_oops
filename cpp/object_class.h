#include<string>

using namespace std;

class customers;

class customers{
  string name;
  int amount;
  public:
  customers();
  void set_customer_name(string name);
  void set_customer_amount(int amount);
  string get_customer_name();
  int get_customer_amount();
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

string customers :: get_customer_name(){
    return (this->name);
}

int customers :: get_customer_amount(){
    return(this->amount);
}

