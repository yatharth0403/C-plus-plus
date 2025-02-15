#include <iostream>
using namespace std;

int pow(int num, int p){
    if (p == 0){
        return 1;
    }
    int ans = 1;
    for (int i = 1; i<=p; i++){
        ans = ans * num;
    }
    return ans;
}

int decToBinary (int n){
    int binNum = 0;
    int i = 0;
    while (n > 0){
        int rem = n%2;
        n = n/2;
        binNum = rem * pow(10,i) + binNum;
        i++;
    }
    return binNum;
}
int main() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;
    int binNum = decToBinary(n);
    cout << "Binary equivalent of " << n << " is: " << binNum << endl;
    return 0;
}