#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s.length() > 10){
            int count = s.length() - 2;
            cout << s[0]<<count<<s[s.length()-1];
            continue;
        }else cout << s;
    }
    return 0;
}