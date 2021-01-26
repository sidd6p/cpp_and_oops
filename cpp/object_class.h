using namespace std;
class customers;
class customers{

  string name;
  int amount;
  static int customers_number;

  public:

  customers();
  customers(string , int);//constructor overloading
  void set_customer_name(string name);
  void set_customer_amount(int amount);
  string get_customer_name();
  int get_customer_amount();
  static int total_customer();
  //A static member function differs from a regular member function in that it can be called without an instance of a class,
  //and since it has no instance, it cannot access non-static members of the class.
  customers(const customers &old_obj);
  //there is an implicit copy constructor for every class.
  ~customers();
};

int customers :: customers_number = 0;

customers :: customers(){
  name =  "your_name";
  amount = 0;
  customers_number = customers_number + 1;
  cout<<"constructor is called\n";
}

customers :: customers(string name, int amount){
    this->name = name;
    this->amount = amount;
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

customers :: customers(const customers &old_obj){
    this->name = old_obj.name;
    this->amount = old_obj.amount;
    customers_number = customers_number + 1;
    cout<<"copy constructor is called\n";
}

customers :: ~customers(){
    this->name = "enter_your_name";
    this->amount = 0;
    --customers_number;
    cout<<"destructor is called\n";
}

int customers :: total_customer(){
    if(customers_number > 0)
    return customers_number;
    else
        return 0;
}
