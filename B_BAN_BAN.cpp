#include <iostream>
#include<bits/stdc++.h>
#include <set>
#include <vector>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    
    while (t--) {
        long long int n;
        cin >> n;
        long long int r = 3*n;
        long long int l = 1;
        cout << (n + 1)/2 << endl;
        while(r > l)
        {
            cout << l << " "<< r << endl;
            l += 3;
            r -= 3;
        }
    }
}