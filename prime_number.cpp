#include <iostream>
using namespace std;

int check_prime(int n){
    if (n==2){
        return 2;
    }
    for (int i=2; i <= n/2; i++){
        if(n%i == 0){
            cout << i;
            return 1;
        }
    }
    return 2;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = check_prime(n);
    if (ans == 2){
        cout << "Prime"<< endl;
    }
    else{
        cout << "NOT PRIME" << endl;
    }
    return 0;
}