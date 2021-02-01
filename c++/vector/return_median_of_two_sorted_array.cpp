#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m, n;
        vector <int> temp_nums;
        m = n = 0;
        temp_nums = nums1;
        for(auto i = nums2.begin(); i != nums2.end(); i++){
            temp_nums.push_back(*i);
        }
        m = temp_nums.size();
        cout<<"size is now " <<m<<endl;
        for(auto j = temp_nums.begin(); j != temp_nums.end(); j++){
            cout<<*j<<" ";
        }

        cout<<endl;
        sort(temp_nums.begin(), temp_nums.end());
        if((m % 2) == 0){
          cout<<"if situation "<<((temp_nums.at((m/2) -1) + temp_nums.at((m/2))) / 2.0)<<endl;
           return ((temp_nums.at(((m) /2) - 1) + temp_nums.at(((m)/2))) / 2.0);
           }
           else{
             cout<<"else situation "<<(temp_nums.at(((m + 1) / 2.0) - 1))<<endl;
               return (temp_nums.at(((m + 1) / 2.0) - 1));
           }

    }
};

int main(){
  float sol;
  vector <int> nums1{1, 2};
  vector <int> nums2{3, 4};
  Solution obj;
  sol = obj.findMedianSortedArrays(nums1, nums2);
  cout<<"Median is = "<<sol;
  return 0;
}
