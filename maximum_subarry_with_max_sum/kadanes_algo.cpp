#include <iostream>
#include<climits>
using namespace std;

int main() {
	//code
	int t, n, val;
	cin >> t;
	int s = 0, start = 0, end = 0;
	while(t--) {
	    cin >> n;
	    int m_so_far = INT_MIN, m_till_here = 0;

	    for (int i = 0; i < n; ++i) {
	        cin >> val;
	        m_till_here = m_till_here + val;

	        if (m_so_far < m_till_here) {
	            m_so_far = m_till_here;
							start = s;
							end = i;
						}

	        if (m_till_here < 0) {
	            m_till_here = 0;
							s = i+1;
						}


	    }
	    cout << m_so_far << endl;
			cout << "start " << start << " end " << end;
	}
	return 0;
}
