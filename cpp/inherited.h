#include "object_class.h"
class customer_detail : public customer{
  string customer_id;
  public:
  customer_detail();
  void set_id(int);
  string get_id();
  ~customer_detail();
};

customer_detail :: customer_detail(){
  customer_id = "00000";
}

customer_detail :: set_id(int id){
  customer_id = customer_detail.name + id;
}

string customer_detail :: get_id(){
  return customer_id;
}
customer_detail :: ~customer_detail(){
  customer_id = "000000";
}
