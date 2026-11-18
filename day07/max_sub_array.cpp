#include<iostream>
#include<vector>
using namespace std;

int maxSubarray(vector<int>& nums){
    int curSum = 0;
    int maxSum = INT16_MIN;
    for(int val:nums){
        curSum += val;
        maxSum = max(curSum, maxSum);
        if(curSum <0){
            curSum = 0;

        }
    } return maxSum;

}

int main(){
    vector<int>nums ={2,-8,0,9,-1,3};
    cout<< maxSubarray(nums)<< endl;
    return 0;
}