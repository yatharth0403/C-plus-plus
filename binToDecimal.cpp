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

int binToDecimal (int n){
    int decNum = 0;
    int i = 0;
    while (n > 0){
        int rem = n%10;
        n = n/10;
        decNum = rem * pow(2,i) + decNum;
        i++;
    }
    return decNum;
}
int main() {
    int n;
    cout << "Enter Binary Number: ";
    cin >> n;
    int decNum = binToDecimal(n);
    cout << "Decimal equivalent of " << n << " is: " << decNum << endl;
    return 0;
}