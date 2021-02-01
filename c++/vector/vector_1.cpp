//https://www.geeksforgeeks.org/using-stdvectorreserve-whenever-possible/
//https://www.geeksforgeeks.org/vector-cbegin-vector-cend-c-stl/
//https://www.geeksforgeeks.org/vectorcrend-vectorcrbegin-examples/
//https://www.geeksforgeeks.org/vector-data-function-in-c-stl/
//https://www.geeksforgeeks.org/introduction-iterators-c/

#include<iostream>
#include<vector>

using namespace std;

int main(){

  cout<<(6 % 3);

  int j = 0;

  vector <int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector <int> v2 = {10, 11, 12, 13, 14, 15, 16};
  vector <int> v3;

  cout<<"Enter the data for the vector v3.";
  for(int i = 0; i < 5; i++){
    cin>>j;
    v3.push_back(j);
  }
  cout<<"v3 vector is ";
  for(auto i = v3.begin(); i != v3.end(); i++){
    cout<<*i<<" ";
  }
  cout<<endl;

  cout<<v1[3]<<endl;//std :: vector :: []
  cout<<v1.at(3)<<endl;//If the position is not present in the vector, it throws out_of_range. This is the difference in [] and at().

  cout<<"V1 vector is ";
  for(auto i = v1.begin(); i != v1.end(); i++){
    cout<<*i<<" ";
  }
  cout<<endl;
  cout<<"v2 vector is ";
  for(auto i = v2.begin(); i != v2.end(); i++){
    cout<<*i<<" ";
  }
  cout<<endl;

  cout<<"v2 vector after assignment v2 = v1 ";
  v2 = v1;//It also modifies the size according to the new contents. If the containers are of different types, an error is thrown.
  for(auto i = v2.begin(); i != v2.end(); i++){
    cout<<*i<<" ";
  }
  cout<<endl;

  cout<<"v1 vector after swaping with v3 ";
  v1.swap(v3);
  for(auto i = v1.begin(); i != v1.end(); i++){
    cout<<*i<<" ";
  }

  cout<<endl;

  for(auto i = v1.rbegin(); i != v1.rend(); i++){
    cout<<*i<<" ";
  }
  cout<<endl;

  cout<<v1.front()<<endl;
  cout<<v1.back()<<endl;
  cout<<"First element from the begenning "<<*v1.begin()<<endl;////Returns an iterator pointing to the first element in the vector.
  cout<<"Last element from the ending "<<*v1.end()<<endl;//why is it returning 'zero'??? //Returns an iterator pointing to the THEORETICAL element that follows the last element in the vector
  cout<<"begenning elemet from end "<<*v1.rbegin()<<endl;
  cout<<"Last element from the front "<<*v1.rend()<<endl;//returns a reverse iterator pointing to the THEORETICAL element right before the first element in the array container.
 //begin() and end() function return an iterator(like a pointer) initialized to the first or the last element of the container that can be used to iterate through the collection,
 // while front() and back() function just return a reference to the first or the last element of the container.

  cout<<"\n"<<"Number of element in the v1 are "<<v1.size();//Returns the number of elements in the vector.
  cout<<"\n"<<"Maximum number of element in the v1 can store in it "<<v1.max_size();//Returns the maximum number of elements that the vector can hold.
  cout<<"\n"<<"Capacity of v1 is "<<v1.capacity()<<endl;//Returns the size of the storage space currently allocated to the vector expressed as number of elements.

  v1.resize(3);// Resizes the container so that it contains ‘n’ elements. But it will not destriy the elements.
  j = 0;
  for(auto i = v1.begin(); j != 9; j++){//resize will not delete the element of the vector v1.
    cout<<*i<<" ";
    i++;
  }
  cout<<"\n"<<"Number of element in the v1 are "<<v1.size()<<endl;

  v1.shrink_to_fit();
  j = 0;
 cout<<endl;
  for(auto i = v1.begin(); j != 9; j++){//shrink_to_fit will delete the elements of the vectore v1.
    cout<<*i<<" ";
    i++;
  }

  cout<<v1.empty()<<endl;//// Returns whether the container is empty. '0' for non empty vector.
return 0;
}
