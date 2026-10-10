#include<iostream>
#include<string>

using namespace std;

int main(){
    int m;
    int n;
    cin >> n;
    cin >> m;
    bool val = false;
    for (int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << string(m,'#') << endl;
        }else{
            if(val){
                cout << '#' << string(m-1,'.')  << endl;
            }else{
                cout << string(m-1,'.') << '#'  << endl;
            }

            val = !val;
        }
    }
    return 0;
}