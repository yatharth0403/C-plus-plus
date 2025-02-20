/*
The Boyer-Moore Voting Algorithm helps in finding the majority element in an array,
which is the element that appears more than half the time (if it exists). 
The algorithm works in two main phases:

Candidate Selection:
Traverse through the list and maintain a candidate element and a counter. 
Initially, the counter is set to zero.
For each element:
- If the counter is zero, set the current element as the candidate and set the counter to 1.
- If the counter is non-zero, 
increase or decrease the counter depending on whether the current element matches the candidate.

Candidate Validation:
After the first phase, the candidate will be the most likely majority element. 
To confirm if it is indeed the majority, traverse the list again and count its occurrences.
If it appears more than half the times, it’s the majority element.

Time Complexity
- O(n) for both phases (where n is the length of the array).
- O(1) space complexity, since it only needs a constant amount of space for the candidate and counter.
*/

#include <iostream>
#include <vector>
using namespace std;

int votingAlgo(vector <int>& nums){
    int candidate = INT_MIN;
    int freq = 0;

    //Candidate Selection
    for (int element : nums){
        if(freq == 0){
            candidate = element;
            freq++;
        }else{
            if (candidate == element){
                freq++;
            }
            else{
                freq--;
            }
        }
    }

    // Candidate Validation
    freq = 0;
    for (int element : nums){
        if (element == candidate){
            freq++;
            if (freq > nums.size()/2){
                return candidate;
            }
        }
    }
    return -1;
}

int main() {
    vector <int> nums = {2,2,1,1,1,2,2};
    int ans = votingAlgo(nums);
    cout << ans << endl; 