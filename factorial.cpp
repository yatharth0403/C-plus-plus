#include <iostream>
using namespace std;

int factorial (int n){
    int i = 2;
    int ans = 1;
    for ( i =2; i <= n; i++){
        ans = ans * i;
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter number:";
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial of " << n << " is: " << ans << endl;
    return 0;
}