//https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm
//customer is friend of child_class so it have access to the child_customer class.
using namespace std;

class child_customer;
class customer;
class admin;
class verified;

class admin{
   public:
   void delete_user(customer &user);
};

class child_customer{
    int amount;
    static int customer_number;
    friend class customer;
    string name;
    static int x;
    public:

    child_customer();
    child_customer(string , int);//constructor overloading
    void set_customer_name(string name);
    void set_customer_amount(int amount);
    string get_customer_name();
    int get_customer_amount();
    void friend total_customer();//for accessing customer_number
    static void for_statics();
    ~child_customer();
};

int child_customer :: x = 0;

int child_customer :: customer_number = 0;

class customer{

  int amount;
  static int customer_number;
  string name;

  public:

  customer();
  customer(string , int);//constructor overloading
  void set_customer_name(string name);
  void set_customer_amount(int amount);
  string get_customer_name();
  int get_customer_amount();
  void friend total_customer();//for accessing customer_number
  customer(const customer &old_obj);
  ~customer();
  void child_modify(child_customer &cc, int amount);
  friend void admin :: delete_user(customer &user);//for accessing amount
};

int customer :: customer_number = 0;

child_customer :: child_customer(){
    name = "enter_your_name";
    amount = 0;
    customer_number++;
    cout<<"child constructor is called\n";
}

child_customer :: child_customer(string name, int amount){
    this->name = name;
    this->amount = amount;
    customer_number++;
    cout<<"child parameter constructor is called\n";
}

void child_customer :: set_customer_name(string name){
    this->name = name;
}

void child_customer :: set_customer_amount(int amount){
    this->amount = amount;
}

string child_customer :: get_customer_name(){
    return (this->name);
}

int child_customer :: get_customer_amount(){
    return (this->amount);
}

child_customer :: ~child_customer(){
    this->name = "enter_your_name";
    this->amount = 0;
    --customer_number;
    cout<<"destructor for child customer is called\n";
}

void child_customer :: for_statics(){
  cout<<"called statics function";
  cout<<"static property is "<<x;
}

customer :: customer(){
  name =  "your_name";
  amount = 0;
  customer_number = customer_number + 1;
  cout<<"customer constructor is called\n";
}

customer :: customer(string name, int amount){
    this->name = name;
    this->amount = amount;
    customer_number = customer_number + 1;
    cout<<"customer parameter constructor is called\n";
}

void customer :: set_customer_name(string name){
  this->name = name;
}

void customer :: set_customer_amount(int amount){
  this->amount = amount;
}

string customer :: get_customer_name(){
    return (this->name);
}

int customer :: get_customer_amount(){
    return(this->amount);
}

customer :: customer(const customer &old_obj){
    this->name = old_obj.name;
    this->amount = 0;
    customer_number = customer_number + 1;
    cout<<"customer copy constructor is called\n";
}

customer :: ~customer(){
    this->name = "enter_your_name";
    this->amount = 0;
    --customer_number;
    cout<<"destructor for customer is called\n";
}

void customer :: child_modify(child_customer &cc, int amount){
    if(cc.amount >= amount){
    cc.amount = cc.amount - amount;
    this->amount = this->amount + amount;
    }
    else{
        cout<<"Can't modify the child account";
    }
}

void total_customer(){
    if((customer :: customer_number) > 0){
      cout<<"Total number of customer"<<customer :: customer_number<<"\n";
    }
    else{
      cout<<"total number of customer is 0"<<"\n";
    }
    if((child_customer :: customer_number) > 0){
      cout<<"total number of child customer is"<<child_customer :: customer_number<<"\n";
    }
    else{
      cout<<"Total number of child_customer is 0"<<"\n";
    }
}

void admin :: delete_user(customer &user){
    user.amount = 0;
}
