#include <iostream>
#include <vector>
using namespace std;

int twoSum(vector<int>& nums){
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for(int i = 0; i<nums.size(); i++){
        curr_sum = curr_sum + nums[i];
        max_sum = max(curr_sum, max_sum);
        if (curr_sum < 0){
            curr_sum = 0;
        }
    }
    return max_sum;
}
int main() {
    vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = twoSum(nums);
    cout << ans; 
}