#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];

		for (int i = 0; i < n; i++){
			cin >> a[i];
		}

		int themax = 0;
		int themin = 0;

		

		for (int i = 1; i < n; i++){
			if (a[i] > a[themax]){
				themax = i;
			}
			if (a[i] < a[themin]){
				themin = i;
			}
		}

		int res = INT_MAX;
		//truong hop lay tu ben trai
		res = min(res,max(abs(themin - 0 + 1), abs(themax - 0 + 1)));
		// truong hop lay tu ben phai
		res = min(res,max(abs(n - themin), abs(n - themax)));
		// truong hop lay tu 2 bien
		if (themin < themax){
			res = min(res, themin - 0 + 1 + n - themax);
		}else{
			res = min(res, themax - 0 + 1 + n - themin);
		}

		cout << res << endl;
	}
	return 0;
}