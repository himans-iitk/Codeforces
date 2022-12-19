    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    
    int main() {
    	int t;
    	cin >> t;
    	while(t--)
    	{
    	    int n;
    	    cin >> n;
    	    vector<int>vec(n);
    	    for(int i = 0; i < n; i++)
    	       cin >> vec[i];
    	    int mx = vec[0];
    	    int mn = vec[0];
    	    for(int i = 0; i < n; i++)
    	    {
    	        mn = mn & vec[i];
    	        mx = mx | vec[i];
    	    }
    	    cout << mx - mn << endl;
    	}
    	return 0;
    }