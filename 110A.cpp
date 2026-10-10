#include<iostream>

using namespace std;

int main(){
    long long val;
    cin >> val;
    int count = 0;
    while (val > 0)
    {
        int digit =  val%10;
        val  = val/10;
        if(digit == 4 || digit == 7) count++;
    }
    if(count == 4 || count == 7)
        cout << "YES";
    else cout << "No";
    return 0;
    
}