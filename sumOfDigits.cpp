#include <iostream>
using namespace std;
int sumOfDigits(int n){
    int sum = 0;
    while (n > 0){
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;

}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int ans = sumOfDigits(n);
    cout << "Sum of digits of " << n << " is:" << ans << endl;
    return 0;
}