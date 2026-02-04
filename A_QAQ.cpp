#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;

	int res = 0;
	// for (int i = 0; i < s.size(); i++){
	// 	if (s[i] == 'A'){
	// 		int amountleft = 0;
	// 		int amountright = 0;
	// 		for (int j = i - 1; j >= 0; j--){
	// 			if (s[j] == 'Q'){
	// 				amountleft++;
	// 			}
	// 		}

	// 		for (int j = i + 1; j < s.size(); j++){
	// 			if (s[j] == 'Q'){
	// 				amountright++;
	// 			}
	// 		}

	// 		res += amountleft * amountright;
	// 	}
	// }

	int countQ = 0;
	int countQA = 0;
	int countQAQ = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'Q'){
			countQ ++;
			countQAQ += countQA;
		}
		if (s[i] == 'A'){
			countQA += countQ;
		}
	}

	cout << countQAQ << endl;
	return 0;
}