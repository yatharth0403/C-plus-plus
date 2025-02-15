#include <iostream>
using namespace std;

void revArr(int size, int arr[]){
    int start =0;
    int end = size -1;
    while (start < end){
        swap(arr[start++], arr[end--]);
    }
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

    revArr(size,arr);
    cout << "Reversed Array : " << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << endl;
    }
    return 0;
}