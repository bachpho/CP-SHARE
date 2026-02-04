#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
int main(){
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	int res = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (a[j] > a[j + 1]){
				swap(a[j], a[j+1]);
				res++;
			}
		}
	}

	cout << res;
}