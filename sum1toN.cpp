#include <iostream>
using namespace std;
int sum1toN(int n) {
    return n * (n + 1) / 2;
}
int main() {
    int n;
    cout << "Enter the length of natural series:";
    cin >> n;
    int ans = sum1toN(n);
    cout << "Sum of first " << n << "integers is: " << ans << endl;
    return 0;
}