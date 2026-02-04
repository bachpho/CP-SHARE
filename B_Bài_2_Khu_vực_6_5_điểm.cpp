#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	

	int tiento[n];
	int hauto[n];
	
	tiento[0] = a[0];
	for (int i = 1; i < n; i++){
		tiento[i] = gcd(tiento[i - 1], a[i]);
	}

	hauto[n-1] = a[n-1];
	for (int i = n - 2; i>=0; i--){
		hauto[i] = gcd(hauto[i+1], a[i]);
	}

	for (int i = 0; i < n; i++){
		cout << tiento[i];
	}
	cout << endl;
	

	// cout << endl;
	// for (int i = 0; i < n; i++){
	// 	cout << hauto[i];
	// }

	int res;
	// truong hop bo so dau
	res = hauto[1];
	// cout << res << endl;
	// truong hop bo co cuoi;
	res = max(res,tiento[n-2]);
	// cout << res << endl;

	for (int i = 1; i < n - 1; i++){
		res = max(res, gcd(tiento[i- 1], hauto[i + 1]));

	}

	cout << res << endl;


	return 0;
}