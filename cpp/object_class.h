using namespace std;
class customers;

class customers{
  string name;
  int amount;
  static int customers_number;
  public:
  customers();
  void set_customer_name(string name);
  void set_customer_amount(int amount);
  string get_customer_name();
  int get_customer_amount();
  static int total_customer();
  ~customers();
};

int customers :: customers_number = 0;

customers :: customers(){
  name =  "your_name";
  customers_number = customers_number + 1;
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
customers :: ~customers(){
    this->name = "enter_your_name";
    this->amount = 0;
    --customers_number;
}

int customers :: total_customer(){
    if(customers_number > 0)
    return customers_number;
    else
        return 0;
}
