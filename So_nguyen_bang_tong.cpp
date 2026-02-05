#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	//tao mot mang luu tong tat ca cac so con lai tru n
	long long tongtrai[n];
	long long tongphai[n];

	tongtrai[0] = a[0];
	for (int i = 1; i< n; i++){
		tongtrai[i] = tongtrai[i-1] + a[i];
	}

	tongphai[n-1] = a[n-1];
	for (int i = n - 2; i >=0; i--){
		tongphai[i] = a[i] + tongphai[i+1];
	}

	// for (int i = 0; i < n; i++){
	// 	cout << tongphai[i] << " ";
	// }

	bool found = false;
	if (tongtrai[n - 2] == a[n - 1]){
		cout << a[n-1];
		found = true;
	}else if (tongphai[1] == a[0]){
		cout << a[0];
		found = true;
	}else {
		for (int i = 1; i < n - 1; i++){
			if (tongtrai[i - 1] + tongphai[i + 1] == a[i]){
				cout << a[i];
				found = true;
				break;
			}
		}
	}

	if (!found){
		cout << "N";
	}

	return 0;
}