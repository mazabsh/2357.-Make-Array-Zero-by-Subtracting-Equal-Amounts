#include<iostream> 
#include<vector> 
#include<set> 

using namespace std; 

class Solution{
public: 
     int minimumOperations(vector<int>& nums) {
       if(nums.empty() || (nums.size()==1 && nums[0]==0)) return 0; 
       set<int> minSet; 
       for(int n:nums){
         if(n!=0) minSet.insert(n); 
       }
       return minSet.size(); 
     }
};
int main(){
  vector<int> nums = {1,5,0,3,5};
  Solution sol; 
  cout << sol.minimumOperations(nums) << endl; 
  return 0; 
}
