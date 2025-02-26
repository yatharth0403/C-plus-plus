/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
 
Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/

#include <iostream>
#include <vector>
using namespace std;

vector <int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> numsWithIndex;
    for (int i = 0; i < nums.size(); ++i) {
        numsWithIndex.push_back({nums[i], i});
    }
    sort(numsWithIndex.begin(), numsWithIndex.end());
    int left = 0;
    int right = numsWithIndex.size()-1;
    while(left<right){
        int sum = numsWithIndex[left].first + numsWithIndex[right].first;
        if(sum == target){
            return {numsWithIndex[left].second, numsWithIndex[right].second};
        }
        else if(sum < target){
            left ++;
        }
        else{
            right --;
        }
    }
        return {};
}

int main() {
    vector <int> vec = {2,7,11,15};
    int target = 9;
    cout << target << endl;
    vector <int> ans = twoSum(vec, target);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}