#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n, k;
	    cin >> n >> k;
	    
	    vector<pair<long long int,long long int>>vec;
	    long long int mx = 0;
	    for(long long int i = 0; i < n; i++)
	    {
	       long long int a;
	       cin >> a;
	       mx = max(mx, a);
	       vec.push_back({0, a});
	    }
	    for(long long int i = 0; i < n; i++)
	    {
	        long long int b;
	        cin >> b;
	        vec[i] = {b, vec[i].second};
	    }
	    
	    sort(vec.begin(), vec.end());
	    
	    long long int temp = 0;
	    long long int i = 0;
	    
	    
	    while(k >= 0 && i < n)
	    {
	       temp += k;
	       while(i < n && temp >= vec[i].second)
	       i++;
	       if(i < n)
	       {
	            k = k - vec[i].first;
	          //  cout << k << endl;
	       }
	    }
	    
	    
	     if(temp >= mx)
	     cout << "YES" << endl;
	     else
	     cout << "NO" << endl;
	}
	return 0;
}