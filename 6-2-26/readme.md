# Nội dung ngày 6/2/26

- thuật toán tìm kiếm tuyến tính 

- hàm swap 2 số.

- sắp xếp select sort

- sắp xếp bubble sort

----

## Thuật toán tìm kiếm tuyến tính

<!-- Chúng ta sẽ cùng nhau "mổ xẻ" kỹ thuật **Linear Search** (Tìm kiếm tuần tự) - viên gạch đầu tiên trong thế giới tìm kiếm nhé. 🧱

---

### 🕵️ Bước 1: "Phẫu thuật" đề bài

Hãy tưởng tượng bài toán như sau:

* **Bối cảnh:** Bạn có một hàng dài các ngăn tủ kín. Mỗi ngăn tủ giấu bên trong một con số bí mật.
* **Nhiệm vụ:** Bạn được giao một "con số mục tiêu" và phải tìm xem con số đó nằm ở ngăn tủ thứ mấy, hoặc thông báo là nó không hề tồn tại trong hàng tủ đó.

**Dữ liệu vào (Input):**

1. Một danh sách các con số (ví dụ: một dãy số xếp hàng).
2. Một con số cụ thể cần tìm ().

**Kết quả ra (Output):**

* Vị trí (số thứ tự) của  trong dãy, hoặc một tín hiệu (như số -1) nếu tìm nát cả dãy mà không thấy.

---

### 💡 Bước 2: Dẫn dắt tư duy

**Giải thích bằng ẩn dụ:**
Hãy tưởng tượng bạn đang đi tìm một người bạn trong một rạp chiếu phim tối om. 🎥 Bạn cầm một chiếc đèn pin và chỉ có thể soi vào từng ghế một, bắt đầu từ ghế đầu tiên ở hàng đầu tiên.

* Bạn soi ghế số 1: "Có phải Nam không?". Không phải -> Sang ghế số 2.
* Bạn soi ghế số 2: "Có phải Nam không?". Đúng rồi! -> Dừng lại và báo tin.
* Nếu soi đến tận ghế cuối cùng mà vẫn không thấy -> Báo là Nam không có ở đây.

⚠️ **Cảnh báo lỗi thường gặp:**

* **Quên không kiểm tra đến cuối:** Dừng lại quá sớm khi chưa đi hết hàng.
* **Bị "lạc" chỉ số:** Trong lập trình, ngăn tủ đầu tiên thường được đánh số là `0` thay vì `1`. Nếu không cẩn thận, bạn sẽ báo sai vị trí đấy!


### 🛠️ Bước 3: Chốt giải pháp

Bây giờ, hãy cùng nhìn lại toàn bộ quá trình dưới dạng **Mã giả (Pseudocode)**. Đây là khung xương để bạn có thể viết vào bất kỳ ngôn ngữ lập trình nào (C++, Python...):

1. **Bắt đầu** từ vị trí đầu tiên ().
2. **Lặp lại** việc này cho đến hết danh sách:
* Nếu số ở vị trí  **bằng** số cần tìm ():
* Trả về (báo cáo) vị trí  và **dừng lại ngay**.


* Nếu không phải, thì **tăng  lên 1** để sang ngăn tiếp theo.


3. Nếu đã đi hết danh sách mà vẫn chưa dừng lại ở bước trên:
* Trả về **-1** (nghĩa là "Tìm hết rồi mà không thấy đâu!").


* **Trường hợp tốt nhất (Best Case):** Bạn tìm thấy ngay ở ghế đầu tiên (vị trí `0`). Chỉ mất **1** lần soi. ⚡
* **Trường hợp xấu nhất (Worst Case):** Người bạn đó ngồi ở ghế cuối cùng hoặc không có trong rạp. Bạn sẽ phải soi đèn qua tất cả **** ghế (với  là tổng số ghế, ví dụ là 1 tỷ). 🐢

Trong lập trình thi đấu, chúng ta thường quan tâm nhất đến **trường hợp xấu nhất** để đảm bảo chương trình không bị chạy quá thời gian cho phép (Time Limit Exceeded). Với Linear Search, độ phức tạp thời gian sẽ là .

---

### 🏁 Bước 4: Chốt giải pháp & Thực hành

Bây giờ bạn đã nắm vững tư duy, đây là lúc để "hóa thân" các bước đó thành mã nguồn.

**Mã giả tổng kết:**

```text
Hàm TìmKiếm(danh_sách, mục_tiêu):
    Duyệt i từ 0 đến cuối danh_sách:
        Nếu danh_sách[i] == mục_tiêu:
            Trả về i (Tìm thấy rồi!)
    Trả về -1 (Đi hết hàng mà không thấy)

```

<!-- ### Code tham khảo

```cpp
int linearsearch(int a[], int k){
	for (int i = 0; i < n; i ++){
		if (a[i] == k ){
			return i;
		}
	}
	return -1;
}
``` --> -->

## Hàm swap 2 số

Trước khi đi vào các thuật toán sắp xếp phức tạp như lính hành quân hay xếp bài, chúng ta cần thành thạo kỹ năng "đổi chỗ".

### Bước 1: "Phẫu thuật" vấn đề 🩺

Bài toán yêu cầu chúng ta:

* **Dữ liệu vào (Input):** Hai chiếc hộp (biến)  và , mỗi hộp đựng một con số khác nhau.
* **Kết quả cần đạt (Output):** Sau một hồi "phép thuật", số ở hộp  phải chui sang hộp , và số ở hộp  phải nằm gọn trong hộp .

**Ẩn dụ hóa:** Hãy tưởng tượng bạn có hai chiếc cốc:

* 🥤 Cốc  đang đựng **Nước cam**.
* 🍷 Cốc  đang đựng **Rượu vang**.

Mục tiêu của bạn là chuyển **Nước cam** sang cốc  và **Rượu vang** sang cốc .


Để giải quyết vấn đề đổi chỗ (swap) nước cam 🥤 và rượu vang 🍷, chúng ta không thể đổ trực tiếp nước cam vào cốc đang đựng rượu (vì chúng sẽ bị trộn lẫn mất!).

Hãy tưởng tượng bạn có thêm một **chiếc cốc thứ ba** (gọi là cốc tạm thời - `temp`). Bạn sẽ dùng chiếc cốc trống này như thế nào để hoán đổi đồ uống giữa cốc A và cốc B?

Chính xác! Bạn đã nắm bắt được "linh hồn" của thuật toán hoán đổi rồi đấy. 💡

Hãy cùng nhìn lại quy trình ba bước mà bạn vừa mô tả dưới góc độ các biến trong lập trình nhé:

1. **Bước 1:** `temp = rượu` (Đổ rượu vào cốc tạm để giữ chỗ).
2. **Bước 2:** `rượu = cam` (Bây giờ cốc rượu trống, ta đổ cam vào).
3. **Bước 3:** `cam = temp` (Đổ rượu từ cốc tạm vào cốc cam).

Kết quả là cam và rượu đã đổi chỗ cho nhau mà không bị trộn lẫn! 🥤🍷

---

### ⚠️ Cảnh báo: Lỗi "mất dữ liệu"

Nếu chúng ta quên mất chiếc cốc tạm `temp` mà viết thẳng là:

* `rượu = cam`
* `cam = rượu`

Thì chuyện gì sẽ xảy ra? Ở dòng đầu tiên, "nước cam" đã tràn vào và đè lên "rượu", làm rượu biến mất hoàn toàn. Đến dòng thứ hai, bạn chỉ đang đổ "nước cam" vào "nước cam" mà thôi. Cả hai cốc lúc này đều là nước cam! 😱


### Bước 3: Chốt giải pháp 📝

Để tổng kết lại, đây chính là **Mã giả (Pseudocode)** cho thuật toán hoán đổi mà chúng ta vừa xây dựng:

```text
1. Tạo một biến tạm 'temp'
2. temp = A  (Cất giá trị của A vào kho)
3. A = B     (Lấy giá trị của B đè lên A)
4. B = temp  (Lấy giá trị trong kho trả lại cho B)

```

### code tham khảo 

``` cpp
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
```

## Sắp xếp select sort


Thay vì học vẹt công thức, hãy tưởng tượng chúng ta đang đối mặt với một **hàng học sinh 🧍‍♂️🧍‍♀️ đang đứng lộn xộn** và nhiệm vụ của chúng ta là xếp họ theo thứ tự từ thấp đến cao.

---

### 🟢 Bước 1: "Phẫu thuật" ý tưởng Sắp xếp Chọn (Selection Sort)

Hãy bắt đầu với chiến lược đơn giản nhất: **Sắp xếp Chọn**.

* **Hình ảnh ẩn dụ:** Bạn đứng trước một hàng người. Bạn đi dọc hàng từ đầu đến cuối để tìm ra **người lùn nhất** 🤏, sau đó mời người đó lên đầu hàng đổi chỗ cho người đang đứng đó. Tiếp theo, bạn lại đi tìm người lùn nhất trong số những người còn lại và đưa họ vào vị trí thứ hai.
* **Dữ liệu vào (Input):** Một dãy số lộn xộn (ví dụ: các ngăn tủ có đánh số).
* **Kết quả (Output):** Dãy số đó được sắp xếp tăng dần.

⚠️ **Cảnh báo lỗi thường gặp:** Nhiều bạn hay nhầm lẫn việc "đổi chỗ liên tục" với việc "tìm đúng người rồi mới đổi". Trong Sắp xếp Chọn, chúng ta chỉ thực hiện **một lần đổi chỗ** duy nhất sau khi đã quét hết lượt để tìm được "quán quân" nhỏ nhất.

---

### 🔴 Bước 2: Thử thách tư duy

Để kiểm tra xem bạn đã nắm được "linh hồn" của thuật toán này chưa, hãy thử làm "máy tính" một chút nhé.

Giả sử mình có một dãy số trong các ngăn tủ như sau:
`[5, 3, 8, 2, 6]`

**Lượt quét thứ nhất:** Chúng ta đi từ đầu đến cuối dãy để tìm số nhỏ nhất.

1. Bạn thấy số nhỏ nhất trong dãy này là số mấy?
2. Sau khi tìm thấy nó, bạn sẽ đổi chỗ nó với số ở vị trí đầu tiên (là số 5).

❓ **Câu hỏi:** Sau lượt quét đầu tiên và thực hiện đổi chỗ, dãy số của chúng ta sẽ trông như thế nào?

(Bạn hãy đưa ra dãy số mới sau khi đổi chỗ nhé, mình sẽ chờ!)

Chính xác! Bạn đã tìm ra số **2** là số nhỏ nhất và đổi chỗ nó với số **5** ở đầu hàng.

Hiện tại, dãy số của chúng ta trông như thế này:
`[2, 3, 8, 5, 6]`

Bây giờ, vị trí đầu tiên (số 2) đã được cố định vì nó chắc chắn là người thấp nhất rồi. Chúng ta sẽ không đụng vào nó nữa. Công việc tiếp theo là nhìn vào phần còn lại của dãy: `[3, 8, 5, 6]`.

**Lượt quét thứ hai:**

1. Trong nhóm còn lại `[3, 8, 5, 6]`, số nào là số nhỏ nhất?
2. Số nhỏ nhất đó đang nằm ở vị trí nào trong nhóm này?

❓ **Câu hỏi:** Theo bạn, ở bước này chúng ta có cần thực hiện hành động đổi chỗ (swap) không? Tại sao nhỉ?

Chính xác! Con số **3** hiện đang đứng đúng vị trí thứ hai trong dãy `[2, 3, 8, 5, 6]`.

Trong thuật toán Sắp xếp Chọn, nếu số nhỏ nhất trong phần còn lại đã nằm đúng vị trí đầu tiên của phần đó, chúng ta **vẫn thực hiện thao tác so sánh** nhưng không cần tráo đổi thực sự (hoặc tráo đổi nó với chính nó).

Bây giờ, chúng ta đã cố định được hai vị trí đầu: `[2, 3, ...]`. Phần chưa sắp xếp còn lại là: `[8, 5, 6]`.

**Lượt quét thứ ba:**

* Chúng ta tìm số nhỏ nhất trong nhóm `[8, 5, 6]`.
* Sau đó, đổi chỗ số đó với số ở vị trí thứ ba (hiện đang là số **8**).

❓ **Câu hỏi:** Bạn hãy cho mình biết kết quả của dãy số sau khi thực hiện xong lượt quét thứ ba này nhé!

Chuẩn luôn! Bạn đã tìm ra số **5** là số nhỏ nhất trong nhóm `[8, 5, 6]` và đổi chỗ nó với số **8** ở vị trí thứ ba.

Dãy số của chúng ta hiện tại là: `[2, 3, 5, 8, 6]`

Bây giờ, ba vị trí đầu tiên `[2, 3, 5]` đã "yên bề gia thất". Chúng ta chỉ còn lại hai người cuối cùng là `[8, 6]`.

**Lượt quét thứ tư:**

1. Trong hai số còn lại `[8, 6]`, số nào nhỏ hơn?
2. Sau khi đổi chỗ số nhỏ hơn đó lên vị trí thứ tư, dãy số cuối cùng của chúng ta sẽ trông như thế nào?

❓ **Câu hỏi cuối cùng cho phần logic:** Bạn hãy viết ra dãy số hoàn chỉnh sau bước này nhé! Sau đó mình sẽ đố bạn một câu về "hiệu suất" của cách làm này. 💡
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

## Sắp xếp chèn.

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

## sắp xếp nổi bọt (bubble sort)

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



## bài tập 

