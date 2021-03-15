#include<bits/stdc++.h>
using namespace std;

void divison(string divisor, string dividend);
bool check_for_error(string &cfc);
void adjust_data(string &data);

string crc_generator;
string dataword;
string reminder;
string receiver_codeword;

int main(){

  cout<<"Enter CRC generator"<<endl;
  cin>>crc_generator;
  adjust_data(crc_generator);

  cout<<"Enter the dataword"<<endl;
  cin>>dataword;
  adjust_data(dataword);

  divison(crc_generator,dataword);
  cout<<"code word is "<<dataword+reminder;

  cout<<"\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n";

  cout<<"Enter the codeword for receiver"<<endl;
  cin>>receiver_codeword;
  adjust_data(receiver_codeword);
  divison(crc_generator, receiver_codeword);
  if(!check_for_error(reminder)){
    cout<<"No error found"<<endl;
  }
  else{
    cout<<"Error found"<<endl;
  }
  return 0;
}

void divison(string divison, string dividend){
    cout<<"generator is "<< divison<<endl;
    cout<<"dataword is "<< dividend<<endl;
    int divison_length = divison.length();
    string temp = dividend;
    string d;
    for(int i = 1; i < divison_length ; i++){
    temp = temp +"0";
  }
  while(!(temp.length() < divison_length)){
    d = temp.substr(0, divison_length);
    for(int i = 0; i < divison_length; i++){
        if((d[i]=='0') && (divison[i]=='1'))
            {
                temp[i]='1';

            }
            else if(d[i]=='1' && divison[i]=='0')
            {
                temp[i]='1';


            }
            else{
                    temp[i]='0';
            }
    }
    adjust_data(temp);
   }
   reminder = temp;
    if(reminder.length() != (divison_length - 1)){
    for(int j = 0; (divison_length - 1) != (reminder.length()); j++){
        reminder = "0"+reminder;
        cout<<"check point one"<<endl;
    }
   }
   cout<<"reminder is "<<reminder<<endl;

}

void adjust_data(string &data){
  char i;
  int j, length;
  length = data.length();
  j = 0;
  for(i = data[0]; (i == '0') && (j < length);){
    j++;
    i = data[j];
  }
  data = data.substr(j, data.length() - j);
}

bool check_for_error(string &cfc){
    int length = cfc.length();
    for(int i = 0; i < length; i++){
        if(cfc[i] == '1'){
            return true;
        }
    }
    return false;
}
