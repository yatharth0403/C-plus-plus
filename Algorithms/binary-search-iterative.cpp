#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector <int>& arr, int target){
    int n = arr.size();
    int end = n-1;
    int start =0;

    while (start <= end){
        int mid = end - ((end - start)/2);
        cout << end << endl;
        if (arr[mid] == target){
            return mid;
        }else if (arr[mid] > target){
            end = mid -1;
        }else{
            start = mid + 1;
        }
    }
    return -1;

}
int main() {
    vector <int> arr = {2, 8, 12, 34, 45, 67, 78, 89, 97, 100};
    int target = 67;
    int ans = binary_search(arr, target);
    cout << ans <<endl;
    return 0;
}