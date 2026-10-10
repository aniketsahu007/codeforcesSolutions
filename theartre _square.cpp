#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long n = (a + c - 1) / c;
    long long m = (b + c - 1) / c;

    cout << n * m << endl;

    return 0;
}