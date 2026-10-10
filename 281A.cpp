#include<iostream>
#include<string>
#include<cctype>

using namespace std;
void capital(string &s);
int main(){
    string s;
    cin >> s;
    capital(s);

}
void capital(string &s){
    s[0] = toupper(s[0]);
    cout << s;
}