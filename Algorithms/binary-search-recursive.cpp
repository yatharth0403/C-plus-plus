#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector <int>& arr, int target, int start, int end){
    int ans = -1;
    if (start <= end){
        int mid = end - ((end - start)/2);
        if (arr[mid] == target){
            ans = mid;
        } else if (arr[mid]> target){
            ans = binary_search(arr,target,start,mid-1);
        }else{
            ans = binary_search(arr,target,mid+1,end);
        }
    }
    return ans;

}

int main() {
    vector <int> arr = {2, 8, 12, 34, 45, 67, 78, 89, 97, 100};
    int target = 8;
    int n = arr.size();
    int start = 0, end = n-1;
    int ans = binary_search(arr, target, start, end);
    cout << ans <<endl;
    return 0;
}