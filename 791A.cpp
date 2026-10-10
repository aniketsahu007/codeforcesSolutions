#include<iostream>

using namespace std;

int main(){
    long long a,b;
    cin >> a;
    cin >> b;
    if (a ==  b){
        cout << 1;
        return 0;
    }
    int i  = 0;
    while(a <= b){
        a = 3*a;
        b = 2*b;
        i++;
    }
    cout << i;
    return 0;
    
}