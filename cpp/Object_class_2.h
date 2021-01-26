using namespace std;
class child_customers;

class child_customers{
    string name;
    int amount;
    static int customer_number;
   // friend class customers;
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

