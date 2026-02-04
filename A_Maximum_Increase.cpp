#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> dp;
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int k;
		cin >> k;
		a.push_back(k);
	}

	// luu mang dp la do dai day tang lon nhat.
	for (int i = 0; i <= n; i++){
		dp.push_back(1);
	}

	dp[0] = 1;

	int res = 1;
	for (int i = 1; i < n; i++){
			if (a[i] > a[i-1]){
				dp[i] = dp[i-1] + 1;
			}
		res = max(res, dp[i]);
	}

	cout << res;
	return 0;
}