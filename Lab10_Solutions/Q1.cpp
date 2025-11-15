// Q1 - notAlone functions
#include <vector>
using namespace std;

// replaces alone val with max neighbor
vector<int> notAlone(const vector<int>& nums, int val) {
    vector<int> result = nums;
    for (int i = 1; i < nums.size() - 1; i++) {
        if (nums[i] == val && nums[i-1] != val && nums[i+1] != val) {
            result[i] = nums[i-1] > nums[i+1] ? nums[i-1] : nums[i+1];
        }
    }
    return result;
}

// replaces alone val with specified replaceVal
vector<int> notAlone(const vector<int>& nums, int val, int replaceVal) {
    vector<int> result = nums;
    for (int i = 1; i < nums.size() - 1; i++) {
        if (nums[i] == val && nums[i-1] != val && nums[i+1] != val) {
            result[i] = replaceVal;
        }
    }
    return result;
}