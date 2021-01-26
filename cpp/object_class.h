using namespace std;

class child_customers;
class customers;

class child_customers{
    string name;
    int amount;
    static int customer_number;
    friend class customers;
    public:
    child_customers();
    child_customers(string , int);//constructor overloading
    void set_customer_name(string name);
    void set_customer_amount(int amount);
    string get_customer_name();
    int get_customer_amount();
    static int total_customer();
    ~child_customers();
};

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
  void child_modify(child_customers &cc, int amount);
};

int child_customers :: customer_number = 0;

child_customers :: child_customers(){
    name = "enter_your_name";
    amount = 0;
    customer_number++;
    cout<<"child constructor is called\n";
}

child_customers :: child_customers(string name, int amount){
    this->name = name;
    this->amount = amount;
    customer_number++;
    cout<<"child constructor is called\n";
}

void child_customers :: set_customer_name(string name){
    this->name = name;
}

void child_customers :: set_customer_amount(int amount){
    this->amount = amount;
}

string child_customers :: get_customer_name(){
    return (this->name);
}

int child_customers :: get_customer_amount(){
    return (this->amount);
}

int child_customers :: total_customer(){
    if(customer_number > 0)
    return customer_number;
    else
        return 0;
}
child_customers :: ~child_customers(){
    this->name = "enter_your_name";
    this->amount = 0;
    --customer_number;
    cout<<"destructor for child customer is called\n";
}


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

void customers :: child_modify(child_customers &cc, int amount){
    if(cc.amount >= amount){
    cc.amount = cc.amount - amount;
    this->amount = this->amount + amount;
    }
    else{
        cout<<"Can't modify the child account";
    }
}
