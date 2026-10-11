#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        if((n - ((n+m-1)/m))  <= k) 
            cout << "NO\n";
        else  
            cout << "YES\n";
    }
    return 0;
}