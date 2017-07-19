#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t, n, num;
	cin >> t;
	for (int j = 0; j < t; ++j) {
	    vector<int> v;
	    cin >> n;
	    for(int i = 0; i < n-1; ++i) {
	        cin >> num;
	        v.push_back(num);
	    }

	    sort(v.begin(), v.end());
	    int s = v.size();
	    s = v[s-1];
      int k = 0;
	    for (int i = v[0]; i < s; ++i) {
	        if (i != v[k++]) {
	            cout << i << endl;
	            break;
	        }
	    }
	}
	return 0;
}
