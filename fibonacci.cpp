#include <iostream>
using namespace std;
int fib (int n){
    if (n == 1 || n == 2){
        return n-1;
    }
    return fib(n-1) + fib(n-2);
}
int main() {
    int n;
    cout << "Enter positive Number: ";
    cin >> n;
    cout << n <<"th Fibonacci is: " << fib(n) << endl;
    return 0;
}