#include<iostream>
#include<string>
using namespace std;
void check(const string & a);
int main(){
    int n;
    cin >> n;

    string a;
    for(int i = 0; i<n; i++)
    {
    cin >> a;
    check(a);
    }
}
void check(const string & a){
    int len = a.length();
    if (len <= 10){
        cout << a << endl;
    }else{
        int count = len - 2;
        cout <<a.substr(0,1)<<count<<a.substr(len-1,1) << endl;
    }
}