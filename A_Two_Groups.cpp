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
        long long int sum = 0;
        for(long long int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            sum += a;
        }
        cout << abs(sum) << endl;
    }
}