#include<iostream>
using namespace std;

int main(){
    int val,time;
    cin >> val >> time;
    while(time--){
        if((val % 10) != 0) val -= 1;
        else val /= 10;
    }
    cout << val;
    return 0;
}
