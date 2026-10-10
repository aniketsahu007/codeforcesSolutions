#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string s;
    int count = 0;
    int i  = 1;
    cin >> n >> s;
    while(i < n){
        if(s[i-1] == s[i]) count++;

        i++;
    }
    cout << count;
    return 0;
}