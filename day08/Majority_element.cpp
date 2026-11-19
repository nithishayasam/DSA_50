#include <iostream>
#include <vector>
using namespace std;

int majorityElemennt(vector <int>& nums){
   int freq =0 , ans =0;
   for(int i =0 ;i< nums.size();i++){
    if(freq==0){
        ans = nums[i];

    }
    if(ans == nums[i]){
        freq++;
    }
    else
    freq--;

   }return ans;
}



int main(){
    vector<int> nums = { 1,3,3,1,3};
    cout<< majorityElemennt(nums) << endl;
    return 0;
}