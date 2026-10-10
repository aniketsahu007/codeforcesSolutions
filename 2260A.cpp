#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        vector <int> a(t);
        int count = 0;
        for(int i = 0; i < t; i++){
            cin >> a[i];
            if(a[i] == 0) count++;   
        }
        if(count < 2){
            cout <<  -1 << endl;
        }else{
            cout << a[0] + a[t-1] << endl;
        }
    }
    return 0;
}