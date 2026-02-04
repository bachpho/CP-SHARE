[Đề THCS QUẢNG NINH - 2025 - 2026](https://codeforces.com/group/iBXOT8i9ss/contest/667261)

# A - SAL 

https://codeforces.com/group/iBXOT8i9ss/contest/667261/problem/A

## Tóm tắt đề bài. 

Một công nhân tham gia một đợt làm thêm kéo dài liên tiếp trong d ngày. Ngày bắt đầu của đợt làm thêm này là ngày thứ k trong tuần. Tiền công làm việc hằng ngày được quy định như sau:

Các ngày từ thứ Hai đến thứ Sáu: Tiền công là a đồng mỗi ngày;
Các ngày thứ Bảy và Chủ Nhật: Tiền công là b đồng mỗi ngày.
Yêu cầu: Cho biết các giá trị k, d, a và b, hãy tính tổng số tiền công mà người công nhân đó nhận được sau khi kết thúc d ngày làm việc.

Dữ liệu vào: từ tệp văn bản sal.inp gồm một dòng duy nhất chứa 4 số nguyên k, d, a, b:

k là thứ bắt đầu (2 ≤ k ≤ 8, trong đó 2 là thứ Hai, 3 là thứ Ba, ..., 8 là Chủ Nhật);
d là tổng số ngày làm việc (1 ≤ d ≤ 1000);
a, b là tiền công tương ứng (1 ≤ a, b ≤ 105).
Kết quả: ghi ra tệp văn bản sal.out một dòng duy nhất chứa một số nguyên là tổng số tiền công nhận được.

Các số trên một dòng của dữ liệu vào được ghi cách nhau bởi một dấu cách.

Ràng buộc:

Ràng buộc 1: 80% số test ứng với 80% số điểm của bài có 1 ≤ d ≤ 5, k = 2;
Ràng buộc 2: 20% số test ứng với 20% số điểm của bài có 6 ≤ d ≤ 1000.
Examples

Input

2 4 3 5

Output

12

Input

2 7 2 4

Output

18

Input

4 14 2 3

Output

32

Input

3 12 1 2

Output

15

### Giải thích test

Giải thích test 1: k = 2, d = 4, a = 3, b = 5 tức là công nhân bắt đầu làm từ thứ Hai và d = 4 nên sẽ làm liên tiếp các ngày thứ Hai, Ba, Tư và thứ Năm. Vì vậy tiền công là d × a = 4 × 3 = 12.

## Phân tích đề bài.

Các ngày trong tuần được đánh số từ 2 3 4 5 6, và 7 8 . sau đó sẽ lặp lại từ số 2. Với hai mệnh giá tiền công a cho ngày trong tuần là 2 3 4 5 6, và b cho ngày cuối tuần là 7 8. Mục tiêu là tính lương.

Đây là một dạng bài mô phỏng quá trình, đề bài cho 2 số đầu vào là k và d, với k là ngày bắt đầu làm việc, và d là số ngày làm việc liên tiếp. 
Ví dụ:

k = 2, d = 7, ta có những ngày làm việc như sau.
2 3 4 5 6 7 8.

Tính chất sẽ lặp lại từ 8 chuyển về 2. Với trường hợp như sau
k = 5, d = 7, ta có những ngày làm việc như sau.
5 6 7 8 2 3 4 .

Vì thế ta chọn vòng lặp while khi hết số ngày, và mô phỏng lại quá trình.
```cpp
while (d--){
  // xử lí;
  k++;
  if (k > 8) k = 2; // xử lí trường hợp từ 8 ( ngày chủ nhật) thì chuyển nó thành thứ 2.
}
```

Chạy tay đoạn code trên với d = 7, và k = 5;
while(d--) (đây là cách viết code thường thấy, vòng lặp chạy được 7 lần, hoặc có thể dùng for i từ 1->7)
với k = 5, thì sẽ xử lí,
sau khi xử lí, thì tăng k = 6;
quay lại vòng lặp while. 

ở đoạn xử lí, với ngày trong tuần nghĩa là k >= 2 && k <= 6 thì tiền lương sẽ tính là a, ketqua += a;

ngược lại , thì sẽ rơi vào cuối tuần, thì tiền lương sẽ cộng với b, ketqua += b;

```cpp
if (k >= 2 && k <= 6) {
  ketqua += a;
}else{
  ketqua += b
}
```

sau đó chúng ta in kết quả ra.

## code tham khảo.

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("sal.inp", "r", stdin);
    freopen("sal.out", "w", stdout);
	int k, d, a, b;
	cin >> k >> d >> a >> b;

	long long cost = 0;
	while(d--){
		if (k >= 2 && k <= 6){
			cost += a;
		}else{
			cost +=b;
		}

		k++;
		if (k > 8){
			k = 2;
		}
	}
	cout << cost;
	return 0;
}
```

-----------

# B - VAL

https://codeforces.com/group/iBXOT8i9ss/contest/667261/problem/B

## Đề bài.
Cho dãy một gồm n số nguyên a1, a2, ..., an. Một dãy con liên tiếp là dãy có dạng ai, ai + 1, ..., aj (1 ≤ i ≤ j ≤ n), j - i + 1 được gọi là độ dài của dãy con đó.

Yêu cầu: Hãy tìm độ dài lớn nhất của dãy con liên tiếp chỉ bao gồm đúng k giá trị.

Dữ liệu vào: từ file văn bản val.inp

Dòng đầu chứa hai số nguyên n, k (2 ≤ n ≤ 105;1 ≤ k ≤ 2);
Dòng thứ hai chứa n số nguyên a1, a2, ..., an (1 ≤ ai ≤ 3;i = 1, 2, ..., n).
Kết quả: ghi ra file văn bản val.out một số nguyên duy nhất là độ dài lớn nhất của dãy con liên tiếp chỉ bao gồm đúng k giá trị.

Các số trên một dòng của dữ liệu vào được ghi cách nhau bởi một dấu cách. Dữ liệu đầu vào đảm bảo bài toán luôn tồn tại đáp án.

Ràng buộc:

Ràng buộc 1: 40% số test ứng với 40% số điểm của bài có k = 1;1 ≤ ai ≤ 2 với mọi i = 1, 2, ..., n và ai ≤ ai + 1 với mọi i = 1, 2, ..., n - 1;

Ràng buộc 2: 40% số test ứng với 40% số điểm của bài có k = 1;

Ràng buộc 3: 20% số test ứng với 20% số điểm của bài có k = 2.

Examples

InputCopy

8 1

1 1 1 2 2 2 2 2

OutputCopy

5

InputCopy

10 1

1 2 2 3 2 3 3 3 1 1

OutputCopy

3

InputCopy

10 2

1 3 2 3 3 1 1 3 1 2

OutputCopy

6

## Giải thích đề. 

Đề bài cho N và k, một dãy số a[i], yêu cầu tìm dãy dài nhất mà có đúng k phần tử khác nhau. 

Đề bài nhấn mạnh tính chất đúng bằng k, nghĩa là nhiều hơn thì cũng không được mà nhỏ hơn k cũng không được, và có một điều đặc biệt rằng a[i] ở đây có giá trị từ 1 - 3 mà thôi. Một con số rất nhỏ và lí tưởng. 

ví dụ ở trường hợp dãy số: 1 2 3 1 2, thì có k = 3 và độ dài là 5.

## Hướng giải quyết.

Đề yêu cầu mình phải làm 2 việc:
- xác định xem dãy số có đúng k phần tử khác nhau không.
- dài nhất là bao nhiêu.

Chúng ta sẽ tách đề ra thành 2 việc và làm từng việc một.

Đầu tiên là xác định dãy số có k phần tử hay không.
vì tính chất của a[i] là những số rất nhỏ. nên ta có thể lưu một mảng trạng thái, đặt tên mảng là int theK[4], có index từ 0 -> 3, để lưu các số k xuất hiện mấy lần trong dãy con.

Chúng ta xây dựng một hàm để tính xem trong theK[] có bao nhiêu số K xuất hiện.
```cpp
int soloai(int theK[]){
	int res = 0;
	for (int i = 0; i < 4; i++){
		if (theK[i]) res++;
	}
	return res;
```


bài này sẽ dùng kỹ thuật duyệt 2 con trỏ, một là bên trái (left, với tên biến là l) một là phải (right, với tên biến là r) .
ví dụ rằng dãy số 1 2 3 1 2, với l = 2, và r = 3, thì có 2 phần tử, là 2 3 . nên ta xác định công thức tính số lượng phần tử là r - l + 1. 

khi chúng ta duyệt một r tăng lên, chúng ta kiểm tra xem dãy con có đúng k số loại thì cập nhật trạng thái, nếu mà số loại có lớn hơn k thì chúng ta phải tăng l lên để giảm số lượng phần tử của mảng xuống. 


> ví dụ 1 2 3 1 2, k = 2, l = 1, r đi đến 3, dãy là 1 2 3, số loại là 3, nếu chúng ta tiếp tục tăng r lên, thì số loại sẽ không thể giảm xuống. Số loại chỉ giảm xuống khi tăng l lên bằng 2.

> lúc này l = 2, r = 3, dãy con sẽ là 2 3, và có số loại là 2. 

## code tham khảo.

```cpp
#include<bits/stdc++.h>
using namespace std;
int soloai(int theK[]){
	int res =0;
	for (int i = 0; i < 4; i++){
		if (theK[i]){
			res++;
		}
	}
	return res;
}
int main(){
	int res = 0;
	int n, k;
	cin >> n >> k;
	int a[n];
	int theK[4] = {0};
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l = 0;
	for (int r = 0; r < n; r++){
		theK[a[r]]++;
		while(soloai(theK) > k){
			theK[a[l]]--;
			l++;
		}
		if (soloai(theK) == k){
			res = max(res, r - l + 1);
		}
	}
	cout << res;
	return 0;
}

```
# C - ARR
## Đề bài. 
Cho một dãy gồm n số nguyên a1, a2, ..., an và các số nguyên b, k1, k2. Bạn được thực hiện tối đa k1 + k2 phép toán trên các phần tử của dãy để giảm tổng các phần tử của dãy số đã cho.

Phép toán loại 1: Chọn một số ai bất kì của dãy và thay thế ai bằng ⌊ ai / 2⌋ (chia đôi và lấy phần nguyên, ví dụ: ⌊ 17 / 2⌋ = 8). Bạn được sử dụng tối đa k1 phép toán loại 1.

Phép toán loại 2: Chọn một số ai bất kì của dãy và thay thế ai bằng giá trị lớn nhất của hai số ai - b và 0 (trừ đi b đơn vị, nếu kết quả âm thì lấy bằng 0). Bạn được sử dụng tối đa k2 phép toán loại 2.
Quy tắc: Với mỗi số ai trong dãy, bạn có thể chọn: không phép toán nào, chỉ phép toán loại 1, chỉ phép toán loại 2, hoặc dùng cả hai phép toán, mỗi phép toán được thực hiện tối đa một lần với số ai. Nếu dùng cả hai loại trên cùng một số, bạn có thể thực hiện theo thứ tự nào tùy ý.

Yêu cầu: Hãy tìm tổng nhỏ nhất của dãy số sau khi sử dụng tối đa k1 phép toán loại 1 và k2 phép toán loại 2.

Dữ liệu vào: từ tệp văn bản arr.inp

Dòng đầu chứa 4 số nguyên n, b, k1, k2 (1 ≤ n ≤ 300, 1 ≤ b ≤ 109, 0 ≤ k1, k2 ≤ n);
Dòng thứ hai chứa n số nguyên dương ai (1 ≤ ai ≤ 109).
Dữ liệu ra: ghi ra tệp văn bản arr.out

Một số nguyên duy nhất là tổng nhỏ nhất tìm được.
Các số trên một dòng của dữ liệu vào được ghi cách nhau bởi một dấu cách.

Ràng buộc:

Ràng buộc 1: 30% số test có k2 = 0;
Ràng buộc 2: 30% số test có a1 = a2 = ... = an;
Ràng buộc 3: 40% số test có n, k1, k2 ≤ 300, các giá trị đầu vào khác không có ràng buộc gì thêm.

7 4 2 0
1 2 1 8 3 5 7
OutputCopy
19
InputCopy
7 4 2 1
1 2 1 8 3 5 7
OutputCopy
15
InputCopy
7 9 4 5
19 2 1 8 8 5 5
OutputCopy
1
InputCopy
7 9 4 4
8 8 8 8 8 8 8
OutputCopy
12

## Phân tích.

đề cho một dãy gồm n số. và một số b, và số lượng phép toán chia lấy sàn là k1, và trừ là k2. 

phép toán chia k1 thực hiện như sau, 19 / 2 = 9. Lấy sàn ( bằng với phép chia lấy phần nguyên ).

phép trừ với b, ví dụ a[0] = 5, b = 4 thì 5 - 1 = 1. Và có một điều đặc biệt là nếu trừ ra số âm thì ghi kết quả là 0.

Một số có thể dùng cùng lúc 2 phép toán chia và trừ, hoặc là một phép toán, hoặc chia, hoặc trừ. 

## Hướng giải quyết. 

bài này có thể tham lam vét điểm, bằng cách sắp xếp lại mảng giảm dần. 

Và ưu tiên dùng tất cả các phép toán cho những số lớn nhất, về việc tối ưu phép toán trừ và chia, dùng cái nào trước. 

Ví dụ với test 
19 8 
trừ trước chia sau thì có kết quả là 19 - 8 = 11 / 2 = 5. 
còn chia trước trừ sau thì có kết quả là 19 / 2 = 9 - 8 = 1. 

thì chia trước trừ sau sẽ có lợi hơn. và cũng chỉ nên dùng phép trừ sau khi chia khi nó lớn hơn b. 
như là test trên, 19 / 2 = 9 > 8. thì sẽ có lợi nhất.

ví dụ về một trường hợp dùng 2 phép toán trên số lớn nhất không có lợi.

ví dụ

11 8 , b = 8. ta có 1 phép chia và 1 phép trừ. 

nếu dùng 2 phép toán cho số trừ 11 thì sẽ còn 0 8, tổng = 8.
nhưng chỉ chúng phép chia cho số đầu tiên, dành lại phép trừ cho số thứ 2 , thì dãy sẽ là 5 0, tổng là 5. 

## code tham khảo trường hợp tham lam ( được 70 point).

```cpp
#include<bits/stdc++.h>
using namespace std;
int b;

int phepchia(int n){
	return n/2;
}
int pheptru(int n){
	if (n - b < 0){
		return 0;
	}else{
		return n - b;
	}
}


int main(){
    //freopen("arr.inp", "r", stdin);
    //freopen("arr.out", "w", stdout);
	int n, k1, k2;
	cin >> n >> b >> k1 >> k2;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	sort(a, a + n, greater<int>());
	
	for (int i = 0; i< n; i++){
		if (k1 > 0 && k2 > 0){
			// hoặc làm cả 2/
			if (phepchia(a[i]) >= b){
				a[i] = pheptru(phepchia(a[i]));
				k1--;
				k2--;
			}else if (a[i] - phepchia(a[i]) > a[i] - pheptru(a[i])){
				// lam phep chia
				a[i] = phepchia(a[i]);
				k1--;
			}else{
				// lam phep tru
				a[i] = pheptru(a[i]);
				k2--;
			}

		}else if (k1 > 0){
			// lam k1
				a[i] = phepchia(a[i]);
				k1--;
		}else if (k2 > 0){
			// lam k2
				a[i] = pheptru(a[i]);
				k2--;
		}
	}
	long long tong = 0;
	for (int i = 0; i < n; i++){
		//cout << a[i] << " ";
		tong += a[i];
	}
	//cout << endl;
	cout << tong;
	return 0;
}
```

## hướng giải tối ưu, quy hoạch động 3 trạng thái.

vì đề bài cho n = 300, khi dùng một mảng 3 trạng thái thì sẽ có 300 * 300 * 300 = 27 000 000 lần duyệt vòng lặp. còn nằm trong độ phức tạp cho phép.

mảng dp lưu trạng thái của 3 biến đó là n, j, k. Tương ứng với trạng thái của số n, phép toán chia, và phép toán trừ. mảng dp này là lưu tổng của mảng nhỏ nhất. chúng ta truy xuất kết quả ở dp[n][k1][k2], với ý nghĩa là tổng nhỏ nhất ở n phần tử khi sử dụng toàn bộ phép tính k1 và k2. 



ban đầu khởi tạo mảng dp là một con số rất lớn, sau đó chúng ta sẽ chọn min với các lựa chọn. 


```cpp
	for (int i = 0; i < 301; i++){
		for (int j = 0; j < 301; j++){
			for (int k = 0; k < 301; k++){
				dp[i][j][k] = 1e15; // khai báo một con số vô cùng lớn.
			}
		}
	}
```

sau đó với mỗi trạng thái ta sẽ so sánh chọn với cách làm nhỏ nhất:
- hoặc là không làm gì cả. 
- hoặc là làm phép chia
- hoặc là làm phép trừ
- hoặc là làm cả 2 phép cùng lúc, và ta cũng không biết nên chọn phép nào làm trước phép kia, vì thế ta so sánh chúng và chọn cái nhỏ hơn.


## code dp tham khảo.



```cpp
#include<bits/stdc++.h>
using namespace std;

long long dp[301][301][301];
int n, b, k1, k2;



int main(){
	cin >> n >> b >> k1 >> k2;
	int a[n+ 1];


	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}

	for (int i = 0; i < 301; i++){
		for (int j = 0; j < 301; j++){
			for (int k = 0; k < 301; k++){
				dp[i][j][k] = 1e15;
			}
		}
	}

	
	dp[0][0][0] = 0;
	for (int i = 1; i < n + 1; i++){
		for (int j = 0;j< k1+1; j++){
			for (int k = 0; k < k2+1; k++){
				// khong lam gi
				dp[i][j][k] = dp[i-1][j][k] + a[i];
				//  chia
				if (j > 0){
					dp[i][j][k] = min(dp[i][j][k], dp[i-1][j-1][k] + (a[i]/2) );
				}
				// tru
				if (k > 0){
					dp[i][j][k] =  min(dp[i][j][k], dp[i-1][j][k-1] + max(0, a[i] - b));
				}

				// lam ca 2
				if (j > 0 && k > 0){
					long long v1 = (a[i] / 2 ) - b;
					long long v2 = (a[i]- b) / 2;
					long long gtmoi = max(0ll, min(v1, v2));

					dp[i][j][k] = min(dp[i][j][k], dp[i-1][j-1][k-1] + gtmoi);

				}
			}
		}
	}


	cout << dp[n][k1][k2];

	return 0;
}
```


# D - PAI

## đề bài.

Cho hai dãy gồm n số nguyên, dãy thứ nhất gồm các số a1, a2, ..., an, dãy thứ hai gồm các số b1, b2, ..., bn.

Yêu cầu: Hãy đếm số cặp chỉ số (i, j) (1 ≤ i ≤ j ≤ n) mà số lớn nhất của các số ai, ai + 1, ..., aj bằng số nhỏ nhất của các số bi, bi + 1, ..., bj.

Dữ liệu vào: từ tệp văn bản pai.inp

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 105);
Dòng thứ hai chứa n số nguyên a1, a2, ..., an (1 ≤ |ai| ≤ 109);
Dòng thứ ba chứa n số nguyên b1, b2, ..., bn (1 ≤ |bi| ≤ 109).
Kết quả: ghi ra tệp văn bản pai.out

Một dòng duy nhất là kết quả của bài toán.
Các số trên một dòng của dữ liệu vào được ghi cách nhau bởi một dấu cách.

Ràng buộc:

Ràng buộc 1: 25% số test ứng với 25% số điểm của bài có n ≤ 100;
Ràng buộc 2: 25% số test ứng với 25% số điểm của bài có n ≤ 5000;
Ràng buộc 3: 25% số test ứng với 25% số điểm của bài có n ≤ 105, a1 ≤ a2 ≤ ... ≤ an, b1 ≤ b2 ≤ ... ≤ bn;
Ràng buộc 4: 25% số test còn lại ứng với 25% số điểm của bài không có ràng buộc gì thêm.
Examples
InputCopy
6
1 2 3 2 1 4
6 7 1 2 3 2
OutputCopy
2
InputCopy
3
3 3 3
3 3 3
OutputCopy
6
InputCopy
7
1 2 3 4 8 8 9
2 4 6 8 8 8 9
OutputCopy
8
InputCopy
10
1 2 3 2 1 3 2 1 2 1
6 7 1 2 3 2 2 3 1 2
OutputCopy
4

## Phân tích

đề cho 2 dãy a và b, cần tìm số lượng các giải con l , r sao cho max của a thì bằng min của b.

ví dụ như test 1 2 3 , max là 3, còn 5 4 3 thì có min là 3. là thỏa mãn.

dùng kỹ thuật 2 con trỏ để vét test. một con trỏ for left 1 -> n, và right từ left -> n. 

khi dịch right về cuối , càng mở rộng , nếu có trường hợp maxA > minB. Thì dù có mở rộng dãy con như thế nào chăng nữa thì cũng không thể làm thay đổi maxA và minB, cho nên ta cho dừng sớm.

1 2 3 4 

4 5 6 7

thỏa mãn max A = min B = 4.

sau đó mở rộng ra thành

1 2 3 4 2
4 5 6 7 3.

lúc này max A = 4, còn min A = 3. dù có mở rộng thêm đi nữa thì min B cũng không thể nào tăng lên được nữa, chỉ có xu hướng là giảm xuống. 

## code tham khảo

```cpp
# include<bits/stdc++.h>
using namespace std;
int main(){
	// freopen("pai.inp", "r", stdin);
	// freopen("pai.out", "w", stdout);

	int n;
	cin >> n;
	long long a[n];
	long long b[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	for (int i = 0; i < n; i++){
		cin >> b[i];
	}

	long long  res = 0;
	for (int i = 0; i < n; i++){
		long long maxA = INT_MIN;
		long long minB = INT_MAX;
		for (int j = i; j < n; j++){
			maxA = max(maxA, a[j]);
			minB = min(minB, b[j]);
			if (maxA == minB){
				res ++;
			}
			if (maxA > minB){
				break;
			}
		}
	}
	cout << res;
	return 0;

}
```
