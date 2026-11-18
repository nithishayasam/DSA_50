#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i;   // found, return index
        }
    }
    return -1;   // not found
}

int main() {
    vector<int> nums = {10, 25, 7, 42, 18};
    int target = 42;

    int idx = linearSearch(nums, target);
    if (idx != -1) {
        cout << target << " found at index " << idx << endl;   // expected: index 3
    } else {
        cout << target << " not found" << endl;
    }
    return 0;
}