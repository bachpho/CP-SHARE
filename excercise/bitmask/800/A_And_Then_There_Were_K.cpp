// Nhap vao so luong test case t
// Voi moi test case:
//     Nhap vao so n
//     Tim so x sao cho 2 mu x la luy thua cua 2 lon nhat ma van <= n
//     Ket qua la (2 mu x) - 1
//     In ra ket qua

# include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t -- ){
		int n;
		cin >> n;
		int p = 1;
		while (p * 2 <= n){
			p *= 2;
		}
		cout << p - 1 << endl;
	}
	return 0;
}