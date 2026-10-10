#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s;
    cin >> s;
    int BSize = 0;
    int Ssize = 0;
    for(char c:s){
        if(islower(c)){
            Ssize++;
        }else{
            BSize++;
        }
    }
    for(char &c : s){
    if(BSize>Ssize){
        c = toupper(c);
    }else{
        c = tolower(c);
    }
    }
    cout << s;
    return 0;
}