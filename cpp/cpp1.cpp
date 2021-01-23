#include<iostream>
using namespace std;
class Friend_1;
class Friend_2{
int balance;
public :
     Friend_2(int balance);//parameterized constructor
     void friend display(Friend_1 obj1, Friend_2 obj2);//common display function
     friend class Friend_1;//making class Friend_1 friend of class Friend_2
};
class Friend_1{
int balance;
public :
    Friend_1();//default constructor
    void friend display(Friend_1 obj1, Friend_2 obj2);//common display function
    void updateBalance(Friend_2 &, int newBalance);//for updating balance of object of class Friend_2
};
//implementation of class Friend_2 member functions
Friend_2 :: Friend_2(int balance){
this->balance = balance;
}
//implementation of class Friend_1 member functions
Friend_1 :: Friend_1(){
balance = 5000;
}
void Friend_1 :: updateBalance(Friend_2 & obj, int newBalance){
obj.balance = newBalance;
}
void display(Friend_1 obj_1, Friend_2 obj_2){
cout<<"balance of obj1 of class Friend_1 "<< obj_1.balance<<endl<<"balance of obj2 of class Friend_2 "<< obj_2.balance;
}
//driver menu
int main(){
Friend_1 obj1;
Friend_2 obj2(1000);
obj1.updateBalance(obj2, 500);
display(obj1, obj2);
return 0;
}
