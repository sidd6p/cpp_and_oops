#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector <int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
  for(auto i = v1.begin(); i != v1.end(); i++){
    cout<<*i<<" ";
  }
  v1.shrink_to_fit();
  cout<<"\n"<<"Number of element in the v1 are "<<v1.size();
  cout<<"\n"<<"Maximum number of element in the v1 can store in it "<<v1.max_size();
  cout<<"\n"<<"Capacity of v1 is "<<v1.capacity();
  v1.resize(3);
  cout<<"\n"<<"Number of element in the v1 are "<<v1.size()<<endl;
  for(auto i = v1.begin(); i != v1.end(); i++){
    cout<<*i<<" ";
  }
  auto i = v1.empty();
  cout<<i<<endl;
return 0;
}
