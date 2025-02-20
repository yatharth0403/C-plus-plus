#include <iostream>
using namespace std;

int linSearch(int arr[], int size, int element){
    for (int i = 0; i< size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
int main() {
    int size;
    cout << "Give size of array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements: " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Enter element to be searched: ";
    int element;
    cin >> element;
    int ans = linSearch(arr, size, element);
    cout << "Element found at: " << ans << endl;
    return 0;
}