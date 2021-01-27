//A static member function differs from a regular member function in that it can be called without an instance of a class,
//and since it has no instance, it cannot access non-static members of the class.
//customer is friend of child_class so it have access to the child_customer class.
//there is an implicit copy constructor for every class.
using namespace std;

class child_customer;
class customer;
class admin;

class admin{
   public:
   void delete_user(customer &user);
};

class child_customer{
    string name;
    int amount;
    static int customer_number;
    friend class customer;

    public:

    child_customer();
    child_customer(string , int);//constructor overloading
    void set_customer_name(string name);
    void set_customer_amount(int amount);
    string get_customer_name();
    int get_customer_amount();
    void friend total_customer();
    ~child_customer();
};

int child_customer :: customer_number = 0;

class customer{

  string name;
  int amount;
  static int customer_number;

  public:

  customer();
  customer(string , int);//constructor overloading
  void set_customer_name(string name);
  void set_customer_amount(int amount);
  string get_customer_name();
  int get_customer_amount();
  void friend total_customer();
  customer(const customer &old_obj);
  ~customer();
  void child_modify(child_customer &cc, int amount);
  friend void admin :: delete_user(customer &user);
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
    cout<<"child constructor is called\n";
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

/*int child_customer :: total_customer(){
    if(customer_number > 0)
    return customer_number;
    else
        return 0;
}*/
child_customer :: ~child_customer(){
    this->name = "enter_your_name";
    this->amount = 0;
    --customer_number;
    cout<<"destructor for child customer is called\n";
}


//int customer :: customer_number = 0;

customer :: customer(){
  name =  "your_name";
  amount = 0;
  customer_number = customer_number + 1;
  cout<<"constructor is called\n";
}

customer :: customer(string name, int amount){
    this->name = name;
    this->amount = amount;
    customer_number = customer_number + 1;
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
    this->amount = old_obj.amount;
    customer_number = customer_number + 1;
    cout<<"copy constructor is called\n";
}

customer :: ~customer(){
    this->name = "enter_your_name";
    this->amount = 0;
    --customer_number;
    cout<<"destructor is called\n";
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
