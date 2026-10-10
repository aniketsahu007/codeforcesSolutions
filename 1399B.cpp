#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int minA = *min_element(a.begin(),a.end());
        int minB = *min_element(b.begin(),b.end());
        long long count = 0;
        int i = 0;
        while(n--){
            if(a[i] > minA && b[i] > minB) count += max(a[i]-minA,b[i]-minB);
            else if(a[i] > minA) count += a[i] - minA; 
            else if(b[i] > minB) count += b[i] - minB;   

            i++;
        }
        cout << count << endl;
    }
    return 0;
}