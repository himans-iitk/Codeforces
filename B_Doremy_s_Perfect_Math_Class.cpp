#include <iostream>
#include<bits/stdc++.h>
#include <set>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        
        set<int> st;
        int count = n;
        for (int x : s) {
            for (int y = 0; y < x; y++) {
                if (st.find(x - y) == st.end()) {
                    count--;
                    break;
                }
            }
            st.insert(x);
        }
        
        cout << count << endl;
    }
    
    return 0;
}