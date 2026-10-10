#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
   
    while(t--){
        int output = 0;
        int n,k;
        cin >> n ;
        cin >>k;
        string s;
        cin >> s;
        for(int i = 0; i < n; i += k){
            string farm = s.substr(i,k);
            if(farm.find('0') == string::npos) output++;
        }
        cout  << output << "\n";
    }
    
    return 0;
}
