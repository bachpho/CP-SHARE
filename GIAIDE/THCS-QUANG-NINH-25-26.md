# Bài 1 - SAL 

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
