#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    char prev = 'A';
    for(char c:s){
        if(prev == c){
            res++;
        }
        prev = c;
    }
    cout << res;
    return 0;
}
