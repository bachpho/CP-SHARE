# Nội dung ngày 6/2/26

- thuật toán tìm kiếm tuyến tính 

- hàm swap 2 số.

- sắp xếp select sort

- sắp xếp bubble sort

----

## Thuât toán tìm ucln 


### code tham khảo

```cpp
#include<bits/stdc++.h>
using namespace std;

int ucln(int a, int b){
	while (!(b == 0)) {
		
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main(){

	cout << ucln ( 8, 12 );
	
	return 0;
}
```

hoặc dùng hàm `__gcd()`.

```cpp
	cout << __gcd(8, 12);
```

### Tìm gcd của một mảng. 

```cpp
#include<bits/stdc++.h>
using namespace std;

int n;
int a[100000];

int ucln(int a, int b){
	while (!(b == 0)) {
		
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main(){

	cin >> n;
	int a[n];

	for (int i = 0; i < n ; i++){
		cin >> a[i];
	}

	int uc = a[0];
	for (int i = 1; i < n; i++){
		uc = ucln(uc, a[i]);
	}

	cout << uc;`

	return 0;
}
```

Input 
```text
5
8 4 12 16 20
```
output
```
4
```

## Hàm swap 2 số

### code tham khảo 

``` cpp
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
```

## Sắp xếp select sort

```cpp
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
```

### hàm printa(), in mảng a.

```cpp
void printa(int a[]){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
```

### Hàm main () 

```cpp
#include<bits/stdc++.h>
using namespace std;

int n;
int a[100000];

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
		
		printa(a);


	}
}


int main(){

	cin >> n;
	int a[n];

	for (int i = 0; i < n ; i++){
		cin >> a[i];
	}

	selectsort(a);

	return 0;
}
```

Input

```text
5
6 5 3 2 4
```

Output
```text
2 5 3 6 4 
2 3 5 6 4 
2 3 4 6 5 
2 3 4 5 6 
2 3 4 5 6 
2 3 4 5 6 
```


<!-- Được luôn! Hãy tạm quên những con số khô khan đi, hãy tưởng tượng bạn đang là một **tay chơi bài chuyên nghiệp** 🃏.

Cách bạn sắp xếp những quân bài vừa bốc lên từ dưới bàn chính là **Sắp xếp Chèn (Insertion Sort)**.

### 🃏 Hình ảnh ẩn dụ: Sắp xếp quân bài

1. **Tay trái** bạn là khu vực "đã sắp xếp". Ban đầu nó chỉ có 1 quân bài duy nhất (quân đầu tiên bốc lên), mà 1 quân thì hiển nhiên là... đã đúng thứ tự.
2. **Tay phải** bạn bốc quân tiếp theo. Bạn gọi quân này là quân **"Key"** (Chìa khóa).
3. Bạn so sánh quân **Key** này với các quân bên tay trái, đi ngược từ **phải sang trái**:
* Nếu quân bên trái **lớn hơn** quân Key: Bạn đẩy quân đó sang phải một chút để tạo chỗ trống.
* Nếu quân bên trái **nhỏ hơn hoặc bằng** quân Key: **Dừng lại ngay!** Bạn đã tìm thấy "ổ" cho nó rồi. Bạn đặt quân Key vào khoảng trống đó.



---

### 🔍 Ví dụ thực tế

Giả sử bạn có dãy: `[5, 2, 4, 6, 1]`

* **Bước 1:** Coi số `5` là đã xong. Dãy: `[5] | 2, 4, 6, 1`
* **Bước 2:** Bốc quân **Key = 2**.
* So sánh với `5`: Thấy `5 > 2`, đẩy `5` sang phải.
* Hết chỗ rồi, đặt `2` vào đầu.
* Dãy: `[2, 5] | 4, 6, 1`


* **Bước 3:** Bốc quân **Key = 4**.
* So sánh với `5`: Thấy `5 > 4`, đẩy `5` sang phải.
* So sánh với `2`: Thấy `2 < 4`. **Dừng lại!**
* Đặt `4` vào ngay sau `2`.
* Dãy: `[2, 4, 5] | 6, 1`



⚠️ **Cảnh báo (Ưu điểm chết người):** Hãy nhìn lại Bước 3. Khi thấy số `2` nhỏ hơn `4`, mình không thèm nhìn các số trước số `2` nữa. Đây chính là lý do Insertion Sort **cực nhanh** nếu dãy số đã gần như sắp xếp xong.

---

### 🔴 Thử thách tư duy (Test case nhỏ)

Dãy hiện tại đang là: `[2, 4, 5, 6] | 1`
Bây giờ bạn bốc quân cuối cùng là **Key = 1**.

❓ **Câu hỏi:** 1. Để đưa số `1` về đúng vị trí đầu hàng, bạn phải thực hiện bao nhiêu lần so sánh (và đẩy các số khác sang phải)?
2. Sau khi số `1` "len" được vào đúng chỗ, dãy số cuối cùng sẽ là gì?

(Bạn thử trả lời nhé, mình chờ bạn!)

---

*Sau khi bạn trả lời xong, mình sẽ chỉ cho bạn cách viết Code cực ngắn gọn cho thuật toán "len lỏi" này.*
 -->


----


<!-- Bạn đã sẵn sàng để trở thành "thợ lặn" khám phá các bong bóng chưa? Hãy cùng mình bước vào thế giới của **Bubble Sort**.

Đây là thuật toán mà cái tên nói lên tất cả!

### 🫧 Hình ảnh ẩn dụ: Những bong bóng khí dưới nước

Hãy tưởng tượng mỗi con số trong dãy là một **bong bóng khí**.

* Bong bóng **to hơn** (số lớn hơn) thì có xu hướng **nổi lên nhanh hơn** và về đích (cuối dãy) sớm hơn.
* Bạn đứng ở đầu hàng, xét từng **cặp đôi** đứng sát cạnh nhau.

---

### 🔍 Cách thức hoạt động (Quy trình "Nổi lên")

1. **So sánh cặp đôi:** Bạn bắt đầu từ đầu hàng, so sánh số thứ nhất và số thứ hai.
2. **Đổi chỗ (Swap):** Nếu số trước **lớn hơn** số sau, bạn đổi chỗ chúng. Lúc này số lớn hơn đã "nhích" thêm một bước về phía cuối.
3. **Tiến tới:** Bạn lại so sánh số thứ hai và số thứ ba, rồi thứ ba và thứ tư...
4. **Kết quả một lượt:** Sau khi đi đến tận cùng của hàng, chắc chắn **số lớn nhất** đã bị đẩy (nổi) về vị trí cuối cùng.
5. **Lặp lại:** Bạn quay lại đầu hàng và làm tiếp lượt 2 để đưa số lớn thứ hai về vị trí áp chót.

---

### ⚠️ Cảnh báo "Lãng phí"

Điểm yếu của Bubble Sort là nó đổi chỗ **quá nhiều**. Cứ thấy "ông trước cao hơn ông sau" là đổi ngay, không cần biết phía sau còn ai cao hơn nữa không.

---

### 🔴 Thử thách tư duy: Hãy làm "máy tạo bọt"

Giả sử dãy số là: `[5, 1, 4, 2]`

**Lượt quét thứ nhất:**

1. So sánh `(5, 1)`:  nên đổi chỗ thành `[1, 5, 4, 2]`
2. Tiếp tục so sánh cặp tiếp theo là `(5, 4)`: Theo bạn có đổi chỗ không?
3. Tiếp tục so sánh cặp sau đó với số `2`.

❓ **Câu hỏi:** Sau khi kết thúc lượt quét đầu tiên (đi hết hàng), số **5** sẽ nằm ở đâu và dãy số lúc đó trông như thế nào?

(Bạn viết kết quả dãy số sau lượt 1 nhé, mình chờ bạn!)

Chuẩn không cần chỉnh! Số **5** đã "nổi" một mạch từ đầu hàng xuống tận cuối hàng sau lượt quét đầu tiên.

Hiện tại dãy là: `[1, 4, 2, 5]`
Vị trí cuối cùng (số 5) đã được chốt. Bây giờ chúng ta chỉ cần quan tâm đến nhóm `[1, 4, 2]`.

**Lượt quét thứ hai:**

1. So sánh `(1, 4)`: Không đổi vì .
2. So sánh `(4, 2)`:  nên đổi chỗ thành `(2, 4)`.

❓ **Câu hỏi:** Sau lượt quét thứ hai này, dãy số của chúng ta sẽ trở thành như thế nào? Và bạn đoán xem, chúng ta có cần thực hiện lượt quét thứ ba cho nhóm `[1, 2]` nữa không?

Chuẩn luôn! Dãy của chúng ta sau lượt quét thứ hai trở thành `[1, 2, 4, 5]`.

Về mặt logic con người, ta thấy dãy đã đẹp (đã sắp xếp xong) rồi. Nhưng với một chiếc máy tính chạy thuật toán **Bubble Sort** cơ bản, nó vẫn sẽ phải thực hiện thêm một lượt quét nữa cho cặp `(1, 2)` để chắc chắn là không còn ai cần đổi chỗ nữa.

---

### 📝 Bước 3: Chốt giải pháp (Mã giả)

Để cài đặt Bubble Sort, chúng ta cũng dùng hai vòng lặp:

* **Vòng lặp ngoài:** Kiểm soát số lượt quét (mỗi lượt chốt được một số lớn nhất về cuối).
* **Vòng lặp trong:** Thực hiện so sánh các cặp cạnh nhau `(j, j+1)`.

**Mã giả:**

```text
Lặp i từ 0 đến n-2:
    Lặp j từ 0 đến n-2-i:
        Nếu a[j] > a[j+1]:
            Đổi chỗ a[j] và a[j+1]

```

*(Lưu ý: `n-2-i` là vì mỗi vòng chúng ta đã chốt được một số ở cuối rồi, không cần quét lại những số đó nữa).*
 -->




