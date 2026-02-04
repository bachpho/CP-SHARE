#include<bits/stdc++.h>
using namespace std;
int menhgia[] = {1, 5, 10, 20, 100};

int dp[10000];
int main(){
	long long n;
	cin >> n;

	for (int i = 0; i <= n; i++){
		dp[i] = INT_MAX;
	}
	
	dp[0] = 0;

	for (int i = 1; i <= n;i++){
		for (int j = 0; j <5; j++){
			if (i >= menhgia[j]){
				dp[i] = min(dp[i], dp[i-menhgia[j]] + 1);
			}
		}
	}

	cout << dp[n] << endl;

	cout << sizeof(dp);
	return 0;
}


// int menhgia[] = {1, 5, 10, 20, 100};

// int main(){
// 	int n ;
// 	cin >> n;

// 	int res = 0;
// 	for (int i = 4 ; i >= 0; i--){
// 		res += (n / menhgia[i]);
// 		n %= menhgia[i];
// 	}
// 	cout << res ;
// 	return 0;
// }