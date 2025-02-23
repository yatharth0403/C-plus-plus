#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector <int>& height){
    int end = height.size() - 1;
        int start = 0;
        int maximum_water = -1;

        while (start<=end){
            int ar = (min(height[start], height[end])) * (end-start);
            maximum_water = max(ar, maximum_water);
            if (height[start] <= height[end]){
                start += 1;
            }else{
                end-=1;
            }
        }
        return maximum_water;
}

int main() {
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    int ans = maxArea(height);
    cout << ans <<endl;
}