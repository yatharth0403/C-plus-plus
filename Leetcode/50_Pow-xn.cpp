#include <iostream>
using namespace std;
double expo(double x, int n){
    if (x == 0) return 0;
    long binForm = n;
    double ans = 1;
    if (binForm < 0){
        x = 1/x;
        binForm = -binForm;
    }
    while (binForm > 0){
        if (binForm % 2 == 1){
            ans *= x;
        }
        x*=x;
        binForm /= 2;
    }
    return ans;
}

int main() {
    double x = 2.1;
    int n = 6;
    double ans = expo(x,n);
    cout << ans << endl;
    return 0;
}