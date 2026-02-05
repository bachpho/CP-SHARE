#include<bits/stdc++.h>
using namespace std;

int n;

int linearsearch(int a[], int k){
	for (int i = 0; i < n; i ++){
		if (a[i] == k ){
			return i;
		}
	}
	return -1;
}

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void printa(int a[]){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout <<endl;
}

void selectsort(int a[]){
	for (int i = 0; i < n; i++){
		int vitrimin = i;
		for (int j = i + 1; j < n; j++){
			if (a[j] < a[vitrimin] ){
				vitrimin = j;
			}
		}
		swap(a[i], a[vitrimin]);

	}
}

void insertsort(int a[]){
	for (int i = 0; i < n; i++){
		int key = a[i];
		for (int j = i - 1; j >= 0; j--){
			if (a[j] > key){
				a[j + 1] = a[j];
			}else{
				 
				a[j + 1] = key;

				break;
			}
		}
		printa(a);
	}
}

void bubblesort(int a[]){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - 1; j++){
			if (a[j] >  a[j + 1]){
				swap(a[j], a[j+1]);
			}
		}
		printa(a);
	}
}
int main(){

	cin >> n;
	int a[n];

	for (int i = 0; i < n ; i++){
		cin >> a[i];
	}

	// cout << linearsearch(a, 3);

	// cout << linearsearch(a, 10);	

	int c = 1 ;
	int b = 2;
	// selectsort(a);

	// insertsort(a);

	// bubblesort(a);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}



	return 0;
}