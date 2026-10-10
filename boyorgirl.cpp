#include<iostream>
#include<string>
#include<set>

using namespace std;

int main(){
    string input;
    cin >> input;
    set<char> st(input.begin(), input.end());
    int length = st.size();
    if(length%2==0){
        cout << "CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}