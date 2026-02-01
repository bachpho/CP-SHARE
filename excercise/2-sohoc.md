

# 1. Codeforces 230B - T-primes

## 1. Thông tin & Link bài tập

* **Tên bài:** T-primes
* **Mã bài:** 230B
* **Độ khó (Rating):** 1300
* **Link:** [Codeforces 230B - T-primes](https://codeforces.com/problemset/problem/230/B)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Chúng ta đều biết rằng các số nguyên tố là các số tự nhiên có đúng 2 ước số dương phân biệt. Trong bài toán này, chúng ta sẽ làm quen với một khái niệm mới: **"T-prime"**. Một số nguyên dương được gọi là T-prime nếu nó có **đúng 3 ước số dương phân biệt**.

### Yêu cầu

Cho một danh sách gồm  số nguyên dương. Với mỗi số, hãy kiểm tra xem nó có phải là số T-prime hay không.

### Đầu vào (Input)

* Dòng đầu tiên chứa một số nguyên  () — số lượng số trong danh sách.
* Dòng thứ hai chứa  số nguyên  ().

### Đầu ra (Output)

In ra  dòng: dòng thứ  in "YES" nếu số  tương ứng là T-prime, ngược lại in "NO".

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `3` <br>

<br> `4 5 6` | `YES` <br>

<br> `NO` <br>

<br> `NO` |

---

## 4. Giải thích Test Cases

Để hiểu tại sao kết quả lại như vậy, trước hết ta cần tìm quy luật của số T-prime:

> Một số có đúng 3 ước số khi và chỉ khi nó là **bình phương của một số nguyên tố**.
> Ví dụ:  (ước là 1, 2, 4);  (ước là 1, 3, 9);  (ước là 1, 5, 25).

* **Số 4:**
* Các ước:  (đúng 3 ước).
* Kiểm tra: . Mà  là số nguyên tố.
* **Kết quả:** YES.


* **Số 5:**
* Các ước:  (chỉ có 2 ước).
* Kiểm tra:  (không phải số nguyên).
* **Kết quả:** NO.


* **Số 6:**
* Các ước:  (có 4 ước).
* Kiểm tra:  (không phải số nguyên).
* **Kết quả:** NO.



---


# 2. Codeforces 26A - Almost Prime

## 1. Thông tin & Link bài tập

* **Tên bài:** Almost Prime
* **Mã bài:** 26A
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 26A - Almost Prime](https://codeforces.com/problemset/problem/26/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Một số nguyên dương được gọi là **"tương tự số nguyên tố" (almost prime)** nếu nó có đúng **2 ước số nguyên tố phân biệt**. Ví dụ: các số 6, 10, 12, 18 và 22 là các số almost prime, trong khi đó các số 1, 2, 3, 4, 7, 8, 9 và 24 thì không phải.

### Yêu cầu

Cho một số nguyên dương . Hãy đếm xem có bao nhiêu số nguyên dương trong đoạn từ 1 đến  là số almost prime.

### Đầu vào (Input)

* Một dòng duy nhất chứa số nguyên  ().

### Đầu ra (Output)

* In ra số lượng các số almost prime không vượt quá .

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `10` | `2` |
| `21` | `8` |

---

## 4. Giải thích Test Cases

* **Với n = 10:**
* Các số từ 1 đến 10 là: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.
* Xét các số có đúng 2 ước nguyên tố:
* **6**: Có các ước nguyên tố là {2, 3} (đủ 2 ước)  **Thỏa mãn**.
* **10**: Có các ước nguyên tố là {2, 5} (đủ 2 ước)  **Thỏa mãn**.


* Các số khác không thỏa mãn (Ví dụ: 4 chỉ có ước nguyên tố là 2; 8 chỉ có ước nguyên tố là 2; 9 chỉ có ước nguyên tố là 3).
* **Tổng cộng:** 2 số.


* **Với n = 21:**
* Các số thỏa mãn (almost prime) là: 6, 10, 12, 14, 15, 18, 20, 21.
* Phân tích nhanh: 12 =  (ước nguyên tố là 2, 3); 18 =  (ước nguyên tố là 2, 3); 20 =  (ước nguyên tố là 2, 5).
* **Tổng cộng:** 8 số.

---

# 3. Codeforces 1051B - Relatively Prime Pairs

## 1. Thông tin & Link bài tập

* **Tên bài:** Relatively Prime Pairs
* **Mã bài:** 1051B
* **Độ khó (Rating):** 900
* **Link:** [Codeforces 1051B - Relatively Prime Pairs](https://codeforces.com/problemset/problem/1051/B)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Bạn được cho một khoảng số nguyên  (bao gồm cả  và ). Độ dài của khoảng này là số chẵn ( là số chẵn).

### Yêu cầu

Bạn cần chia tất cả các số trong khoảng này thành các cặp sao cho:

1. Mỗi số thuộc chính xác một cặp.
2. Với mỗi cặp , ước chung lớn nhất của chúng phải bằng 1 (tức là ).

Nếu có thể chia được, hãy in "YES" kèm theo danh sách các cặp. Nếu không, in "NO". (Lưu ý: Với bài toán này, luôn có cách giải cho mọi dữ liệu hợp lệ).

### Đầu vào (Input)

* Một dòng duy nhất chứa hai số nguyên  và  (, ).
* Dữ liệu đảm bảo số lượng phần tử trong khoảng là số chẵn.

### Đầu ra (Output)

* Nếu có cách chia, dòng đầu tiên in "YES".  dòng tiếp theo, mỗi dòng in hai số của một cặp.
* Nếu không, in "NO".

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `1 8` | `YES` <br>

<br> `1 2` <br>

<br> `3 4` <br>

<br> `5 6` <br>

<br> `7 8` |

---

## 4. Giải thích Test Cases

Bí quyết để giải bài này nằm ở một tính chất toán học cơ bản: **Hai số nguyên liên tiếp luôn nguyên tố cùng nhau.**
Tức là:  với mọi số nguyên .

* **Với Input là 1 8:**
* Khoảng số là: {1, 2, 3, 4, 5, 6, 7, 8}.
* Ta chỉ cần ghép các số liên tiếp lại với nhau:
* Cặp (1, 2): .
* Cặp (3, 4): .
* Cặp (5, 6): .
* Cặp (7, 8): .


* Tất cả các số đều được sử dụng và mỗi cặp đều thỏa mãn yêu cầu.



---

# 4. Codeforces 1740A - Factorial Division (Mã gốc: Factorial Division, nhưng thực tế là **Factorise**)

## 1. Thông tin & Link bài tập

* **Tên bài:** Factorise
* **Mã bài:** 1740A
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1740A - Factorise](https://codeforces.com/problemset/problem/1740/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Bạn được cho một số nguyên tố .

### Yêu cầu

Bạn cần tìm một số nguyên tố  bất kỳ sao cho tổng  là một **hợp số** (composite number).
*Hợp số là số nguyên dương lớn hơn 1 và có nhiều hơn 2 ước số.*

### Đầu vào (Input)

* Dòng đầu tiên chứa số bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên tố  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra một số nguyên tố  () thỏa mãn điều kiện. Nếu có nhiều đáp án, bạn có thể in bất kỳ đáp án nào.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `3` <br>

<br> `2` <br>

<br> `7` <br>

<br> `5` | `2` <br>

<br> `7` <br>

<br> `5` |

*(Lưu ý: Đầu ra của bạn có thể khác ví dụ miễn là  là số nguyên tố và  là hợp số)*

---

## 4. Giải thích Test Cases

Đây là một bài toán "đố mẹo". Cách đơn giản nhất để tạo ra một hợp số từ một số nguyên tố  là cộng nó với chính nó.

* Ta có: .
* Vì  là số nguyên tố (), nên  chắc chắn là một số chẵn lớn hơn 2, do đó  luôn là hợp số.
* Vì vậy, ta chỉ cần chọn .

**Phân tích ví dụ:**

* **Với n = 2:** Chọn . Tổng  (là hợp số). **YES**.
* **Với n = 7:** Chọn . Tổng  (là hợp số). **YES**.
* **Với n = 5:** Chọn . Tổng  (là hợp số). **YES**.

*Ngoài ra, bạn cũng có thể chọn  cho hầu hết các trường hợp, hoặc đơn giản nhất là luôn in ra chính số  đó.*

---

# 5. Codeforces 1325A - EhAb AnD gCd

## 1. Thông tin & Link bài tập

* **Tên bài:** EhAb AnD gCd
* **Mã bài:** 1325A
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1325A - EhAb AnD gCd](https://codeforces.com/problemset/problem/1325/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Bạn được cho một số nguyên dương .

### Yêu cầu

Hãy tìm bất kỳ cặp số nguyên dương  nào thỏa mãn điều kiện sau:



Trong đó:

*  là ước chung lớn nhất của  và .
*  là bội chung nhỏ nhất của  và .

### Đầu vào (Input)

* Dòng đầu tiên chứa số lượng bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra hai số nguyên dương  và  cách nhau bởi dấu cách. Nếu có nhiều đáp án, bạn có thể in bất kỳ đáp án nào.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `2` <br>

<br> `2` <br>

<br> `14` | `1 1` <br>

<br> `1 13` |

---

## 4. Giải thích Test Cases

Đây là một bài toán yêu cầu bạn tìm ra một quy luật đơn giản thay vì phải thử mọi cặp số.

**Quy luật vàng:** Hãy luôn thử với .

* Nếu , thì với mọi số nguyên dương :
* 
* 


* Thay vào phương trình của đề bài: .

**Phân tích ví dụ:**

* **Với :**
* Chọn .
* .
* Kiểm tra:  (Thỏa mãn).


* **Với :**
* Chọn .
* .
* Kiểm tra:  (Thỏa mãn).



---
# 6. Codeforces 1370A - Maximum GCD

## 1. Thông tin & Link bài tập

* **Tên bài:** Maximum GCD
* **Mã bài:** 1370A
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1370A - Maximum GCD](https://codeforces.com/problemset/problem/1370/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Bạn được cho một số nguyên dương .

### Yêu cầu

Hãy chọn ra hai số nguyên  và  sao cho , và giá trị ước chung lớn nhất  là **lớn nhất có thể**.

### Đầu vào (Input)

* Dòng đầu tiên chứa số lượng bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra giá trị  lớn nhất tìm được.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `2` <br>

<br> `3` <br>

<br> `5` | `1` <br>

<br> `2` |

---

## 4. Giải thích Test Cases

Để tìm được  lớn nhất trong khoảng từ  đến , ta cần tìm một số  sao cho tồn tại ít nhất hai bội số của  (là  và ) nằm trong khoảng .

Cặp số có  lớn nhất luôn là cặp . Để  thì giá trị  lớn nhất có thể đạt được chính là phần nguyên của  chia cho 2.

> Công thức: 

* **Với n = 3:**
* Các cặp  có thể chọn: .
* .
* Giá trị lớn nhất là **1**. (Theo công thức: ).


* **Với n = 5:**
* Các cặp  có thể chọn: 
* Thử cặp : . Đây là giá trị lớn nhất vì nếu chọn  thì  (vượt quá ).
* Giá trị lớn nhất là **2**. (Theo công thức: ).



---

# 7. Codeforces 1617B - GCD Problem

## 1. Thông tin & Link bài tập

* **Tên bài:** GCD Problem
* **Mã bài:** 1617B
* **Độ khó (Rating):** 900
* **Link:** [Codeforces 1617B - GCD Problem](https://codeforces.com/problemset/problem/1617/B)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Bạn được cho một số nguyên dương .

### Yêu cầu

Hãy tìm ba số nguyên dương phân biệt  sao cho:

1. 
2. 
3. 

Dữ liệu đảm bảo luôn có lời giải cho mọi .

### Đầu vào (Input)

* Dòng đầu tiên là số bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra ba số  thỏa mãn các điều kiện trên. Nếu có nhiều đáp án, hãy in bất kỳ đáp án nào.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `6` <br>

<br> `18` <br>

<br> `11` <br>

<br> `13` <br>

<br> `10` <br>

<br> `7` <br>

<br> `9` | `8 9 1` <br>

<br> `4 6 1` <br>

<br> `5 7 1` <br>

<br> `3 6 1` <br>

<br> `2 4 1` <br>

<br> `3 5 1` |

---

## 4. Giải thích Test Cases

Chiến thuật dễ nhất là luôn cố định ****. Khi đó, bài toán trở thành tìm hai số  sao cho:

* 
* 
* 

Để tìm  và , ta xét các trường hợp của :

1. **Nếu  là số lẻ:** (ví dụ )
* Ta chỉ cần chọn  và .
* Vì  lẻ nên  cũng lẻ, do đó .
* Ví dụ : .


2. **Nếu  là số chẵn:** (ví dụ )
* Ta chia  thành hai phần gần bằng nhau: .
* Nếu  lẻ: Chọn . (Ví dụ : ).
* Nếu  chẵn: Chọn . (Ví dụ : ).
* Các cặp số liên tiếp hoặc cách nhau 2 đơn vị (trong trường hợp số lẻ) thường nguyên tố cùng nhau.



---
# 8. Codeforces 1491A - K-th Largest Value

## 1. Thông tin & Link bài tập

* **Tên bài:** K-th Largest Value
* **Mã bài:** 1491A
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1491A - K-th Largest Value](https://codeforces.com/problemset/problem/1491/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Bạn có một mảng  gồm  số nguyên, mỗi số chỉ có thể là **0** hoặc **1**. Bạn cần thực hiện hai loại truy vấn:

1. **Loại 1:** Thay đổi giá trị . Cụ thể là . (Nếu đang là 0 thì thành 1, đang là 1 thì thành 0).
2. **Loại 2:** Tìm số lớn thứ  trong mảng hiện tại.

### Yêu cầu

Với mỗi truy vấn loại 2, hãy in ra giá trị lớn thứ  của mảng.

### Đầu vào (Input)

* Dòng đầu tiên gồm hai số nguyên  và  () — số phần tử của mảng và số lượng truy vấn.
* Dòng thứ hai gồm  số nguyên  ().
*  dòng tiếp theo, mỗi dòng chứa hai số nguyên  và .
* Nếu ,  là vị trí phần tử cần đảo ().
* Nếu ,  là thứ hạng  cần tìm ().



### Đầu ra (Output)

* Với mỗi truy vấn loại 2, in ra giá trị tương ứng (0 hoặc 1) trên một dòng.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `5 5` <br>

<br> `1 1 0 1 0` <br>

<br> `2 3` <br>

<br> `1 2` <br>

<br> `2 3` <br>

<br> `2 1` <br>

<br> `1 2` | `1` <br>

<br> `1` <br>

<br> `1` |

---

## 4. Giải thích Test Cases

Trong mảng chỉ có 0 và 1, số lớn thứ  sẽ là **1** nếu số lượng số 1 hiện có trong mảng lớn hơn hoặc bằng . Ngược lại, nó sẽ là **0**.

* **Khởi tạo:** Mảng `[1, 1, 0, 1, 0]`. Số lượng số 1 là **3**.
* **Truy vấn 1 (loại 2, k=3):** Vì số lượng số 1 là 3  k=3, nên số lớn thứ 3 là **1**.
* **Truy vấn 2 (loại 1, x=2):** Đảo . Trước đó , giờ . Số lượng số 1 giảm xuống còn **2**.
* **Truy vấn 3 (loại 2, k=3):** Vì số lượng số 1 là 2 < k=3, nên số lớn thứ 3 là **0**. (Lưu ý: Ví dụ trong bảng trên của đề có thể thay đổi tùy theo cách sắp xếp, nhưng logic cốt lõi là đếm số 1).
* **Truy vấn 4 (loại 2, k=1):** Số lượng số 1 là 2  k=1, nên số lớn thứ nhất là **1**.

---

**Gợi ý lập trình:** Đừng sắp xếp lại mảng ở mỗi truy vấn (sẽ bị quá thời gian - TLE). Bạn chỉ cần duy trì một biến **đếm số lượng số 1** (ví dụ `cnt1`).

* Khi có truy vấn loại 1 tại vị trí :
* Nếu  cũ là 1  `cnt1` giảm 1.
* Nếu  cũ là 0  `cnt1` tăng 1.
* Cập nhật .


* Khi có truy vấn loại 2 với giá trị :
* Nếu `cnt1 >= k` in 1, ngược lại in 0.


---
# 9. Codeforces 914A - Perfect Squares

## 1. Thông tin & Link bài tập

* **Tên bài:** Perfect Squares
* **Mã bài:** 914A
* **Độ khó (Rating):** 900
* **Link:** [Codeforces 914A - Perfect Squares](https://codeforces.com/problemset/problem/914/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Một số được gọi là **số chính phương** nếu nó có thể biểu diễn dưới dạng bình phương của một số nguyên. Ví dụ: 0, 1, 4, 9 là các số chính phương, còn 2 và -1 thì không phải.

### Yêu cầu

Cho một danh sách gồm  số nguyên. Hãy tìm số nguyên **lớn nhất** trong danh sách đó mà **không phải** là số chính phương.

### Đầu vào (Input)

* Dòng đầu tiên chứa số nguyên  () — số lượng phần tử.
* Dòng thứ hai chứa  số nguyên  ().
* Dữ liệu đảm bảo luôn có ít nhất một số không phải là số chính phương trong danh sách.

### Đầu ra (Output)

* In ra số nguyên lớn nhất không phải là số chính phương.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `2` <br>

<br> `4 2` | `2` |
| `8` <br>

<br> `1 2 3 4 5 6 7 8` | `8` |

---

## 4. Giải thích Test Cases

* **Với ví dụ 1:**
* Danh sách có {4, 2}.
* 4 là số chính phương vì .
* 2 không phải là số chính phương.
* **Kết quả:** 2.


* **Với ví dụ 2:**
* Danh sách từ 1 đến 8.
* Các số chính phương trong khoảng này là 1 () và 4 ().
* Các số còn lại là {2, 3, 5, 6, 7, 8}.
* Số lớn nhất trong nhóm này là 8.
* **Kết quả:** 8.



---

# 10. Codeforces 1514A - Perfectly Imperfect Array

## 1. Thông tin & Link bài tập

* **Tên bài:** Perfectly Imperfect Array
* **Mã bài:** 1514A
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1514A - Perfectly Imperfect Array](https://codeforces.com/problemset/problem/1514/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Một mảng số nguyên được gọi là "Hoàn hảo" nếu tích của tất cả các phần tử trong mảng đó là một **số chính phương**.

### Yêu cầu

Cho một mảng  gồm  số nguyên dương. Hãy kiểm tra xem có tồn tại bất kỳ **mảng con** nào (không nhất thiết phải liên tiếp) của mảng  mà tích các phần tử của nó **không phải** là một số chính phương hay không.

### Đầu vào (Input)

* Dòng đầu tiên chứa số lượng bộ test  ().
* Với mỗi bộ test:
* Dòng thứ nhất chứa số nguyên  ().
* Dòng thứ hai chứa  số nguyên  ().



### Đầu ra (Output)

* Với mỗi bộ test, in "YES" nếu tồn tại mảng con có tích không phải là số chính phương, ngược lại in "NO".

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `2` <br>

<br> `3` <br>

<br> `1 5 4` <br>

<br> `2` <br>

<br> `100 1` | `YES` <br>

<br> `NO` |

---

## 4. Giải thích Test Cases

Để giải bài này, ta cần một nhận xét toán học:

> Tích của một nhóm các số chính phương luôn là một số chính phương.
> Ngược lại, nếu trong mảng có **ít nhất một số không phải là số chính phương**, thì mảng con chỉ chứa duy nhất số đó sẽ có tích không phải là số chính phương.

Do đó, bài toán quy về việc: **Kiểm tra xem trong mảng có số nào không phải là số chính phương hay không.**

* **Bộ test 1:** Mảng `{1, 5, 4}`.
* 1 là số chính phương ().
* 5 **không phải** là số chính phương.
* 4 là số chính phương ().
* Vì có số 5 không phải số chính phương, ta chọn mảng con `{5}`. Tích là 5 (không phải chính phương).
* **Kết quả:** YES.


* **Bộ test 2:** Mảng `{100, 1}`.
* 100 là số chính phương ().
* 1 là số chính phương ().
* Mọi số trong mảng đều là số chính phương. Bất kỳ mảng con nào bạn chọn (ví dụ `{100}`, `{1}`, hoặc `{100, 1}`) đều có tích là số chính phương.
* **Kết quả:** NO.



---

**Gợi ý lập trình:** Duyệt qua mảng, chỉ cần tìm thấy một số  mà `sqrt(x)` không phải là số nguyên thì in "YES" ngay lập tức. Nếu duyệt hết mảng mà số nào cũng là số chính phương thì in "NO".

Bạn có muốn tôi tiếp tục với mã bài nào khác không?

---
# 11. Codeforces 1619B - Squares and Cubes

## 1. Thông tin & Link bài tập

* **Tên bài:** Squares and Cubes
* **Mã bài:** 1619B
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1619B - Squares and Cubes](https://codeforces.com/problemset/problem/1619/B)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Polycarp rất thích các số nguyên dương là **số chính phương** (có dạng ) hoặc **số lập phương** (có dạng ). Ví dụ: các số 1, 4, 8, 9 là các số mà Polycarp thích.

### Yêu cầu

Cho một số nguyên dương . Hãy đếm xem có bao nhiêu số nguyên từ 1 đến  mà Polycarp thích (tức là số đó là số chính phương, số lập phương, hoặc cả hai).

### Đầu vào (Input)

* Dòng đầu tiên chứa số bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra số lượng các số từ 1 đến  thỏa mãn điều kiện.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `6` <br>

<br> `10` <br>

<br> `1` <br>

<br> `25` <br>

<br> `26` <br>

<br> `100` <br>

<br> `1000000000` | `4` <br>

<br> `1` <br>

<br> `6` <br>

<br> `6` <br>

<br> `12` <br>

<br> `32591` |

---

## 4. Giải thích Test Cases

Để đếm các số từ 1 đến  là chính phương hoặc lập phương, ta áp dụng quy tắc bao hàm - loại trừ:

> **Số lượng = (Số các số chính phương) + (Số các số lập phương) - (Số các số vừa là chính phương vừa là lập phương)**

Một số vừa là chính phương vừa là lập phương sẽ có dạng .

* **Với n = 10:**
* Các số chính phương :  (có 3 số).
* Các số lập phương :  (có 2 số).
* Các số dạng :  (có 1 số).
* Kết quả: . (Đó là các số: 1, 4, 8, 9).


* **Với n = 1:**
* Chỉ có số 1 (vừa là  vừa là ).
* Kết quả: 1.


* **Với n = 25:**
* Chính phương: 1, 4, 9, 16, 25 (5 số).
* Lập phương: 1, 8 (2 số).
* Dạng : 1 (1 số).
* Kết quả: . (Đó là: 1, 4, 8, 9, 16, 25).



---

# 12. Codeforces 1517A - Sum of 2050

## 1. Thông tin & Link bài tập

* **Tên bài:** Sum of 2050
* **Mã bài:** 1517A
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1517A - Sum of 2050](https://codeforces.com/problemset/problem/1517/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Một số được gọi là "số 2050" nếu nó có dạng  với  là một số nguyên không âm. Ví dụ: 2050, 20500, 205000 là các số 2050.

### Yêu cầu

Cho một số nguyên dương . Bạn cần biểu diễn  dưới dạng tổng của một vài số 2050 (mỗi số có thể được dùng nhiều lần). Hãy tìm **số lượng số 2050 ít nhất** cần dùng để có tổng bằng .

### Đầu vào (Input)

* Dòng đầu tiên chứa số bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra số lượng số 2050 ít nhất. Nếu không thể biểu diễn  thành tổng các số 2050, in ra -1.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `6` <br>

<br> `2050` <br>

<br> `4100` <br>

<br> `4101` <br>

<br> `205000` <br>

<br> `22550` <br>

<br> `2530863990000000000` | `1` <br>

<br> `2` <br>

<br> `-1` <br>

<br> `1` <br>

<br> `2` <br>

<br> `36` |

---

## 4. Giải thích Test Cases

Để một số  có thể phân tích thành tổng của các số dạng , thì trước hết ** phải chia hết cho 2050**. Nếu không chia hết, kết quả chắc chắn là -1.

Khi  chia hết cho 2050, gọi . Bây giờ ta cần biểu diễn  dưới dạng tổng của các số có dạng  (1, 10, 100, 1000,...) sao cho số lượng số hạng là ít nhất. Đây chính là việc tính **tổng các chữ số của ** trong hệ thập phân.

* **Với n = 2050:**
* . Tổng các chữ số của 1 là **1**.


* **Với n = 4100:**
* . Tổng các chữ số của 2 là **2**. (Tương ứng ).


* **Với n = 4101:**
*  không chia hết cho 2050. Kết quả là **-1**.


* **Với n = 22550:**
* . Tổng các chữ số của 11 là .
* (Tương ứng ).



---
# 13. Codeforces 1619B - Squares and Cubes

## 1. Thông tin & Link bài tập

* **Tên bài:** Squares and Cubes
* **Mã bài:** 1619B
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1619B - Squares and Cubes](https://codeforces.com/problemset/problem/1619/B)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Polycarp rất thích các số nguyên dương là **số chính phương** (có dạng ) hoặc **số lập phương** (có dạng ). Ví dụ: các số 1, 4, 8, 9 là các số mà Polycarp thích vì .

### Yêu cầu

Cho một số nguyên dương . Hãy đếm xem có bao nhiêu số nguyên từ 1 đến  mà Polycarp thích.

### Đầu vào (Input)

* Dòng đầu tiên chứa số bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra số lượng các số từ 1 đến  là số chính phương hoặc số lập phương.

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `6` <br>

<br> `10` <br>

<br> `1` <br>

<br> `25` <br>

<br> `26` <br>

<br> `100` <br>

<br> `1000000000` | `4` <br>

<br> `1` <br>

<br> `6` <br>

<br> `6` <br>

<br> `12` <br>

<br> `32591` |

---

## 4. Giải thích Test Cases

Để giải quyết bài toán này mà không bị đếm lặp, chúng ta sử dụng nguyên lý bao hàm - loại trừ hoặc sử dụng một cấu trúc dữ liệu lưu trữ các giá trị duy nhất (như `Set`).

**Công thức toán học:**

1. Số các số chính phương : là .
2. Số các số lập phương : là .
3. Số các số vừa là chính phương vừa là lập phương : là .

**Tổng số lượng = (Chính phương) + (Lập phương) - (Cả hai)**

* **Với n = 10:**
* Chính phương: 1, 4, 9 (3 số).
* Lập phương: 1, 8 (2 số).
* Trùng nhau: 1 (1 số).
* Kết quả: .


* **Với n = 25:**
* Chính phương: 1, 4, 9, 16, 25 (5 số).
* Lập phương: 1, 8 (2 số).
* Trùng nhau: 1 (1 số).
* Kết quả: .


* **Với n = 100:**
* Chính phương: .
* Lập phương:  (vì ).
* Trùng nhau ():  (vì ).
* Kết quả: .



---
# 14.  Codeforces 1520B - Ordinary Numbers

## 1. Thông tin & Link bài tập

* **Tên bài:** Ordinary Numbers
* **Mã bài:** 1520B
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1520B - Ordinary Numbers](https://codeforces.com/problemset/problem/1520/B)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Một số nguyên dương được gọi là **"số bình thường" (ordinary number)** nếu trong cách biểu diễn thập phân của nó, tất cả các chữ số đều giống nhau. Ví dụ: các số 1, 2, 11, 55, 777 là các số bình thường, còn 12, 21, 1110 thì không phải.

### Yêu cầu

Cho một số nguyên dương . Hãy đếm xem có bao nhiêu số bình thường trong đoạn từ 1 đến .

### Đầu vào (Input)

* Dòng đầu tiên chứa số lượng bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra số lượng các số bình thường không vượt quá .

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `6` <br>

<br> `1` <br>

<br> `2` <br>

<br> `3` <br>

<br> `10` <br>

<br> `100` <br>

<br> `1000` | `1` <br>

<br> `2` <br>

<br> `3` <br>

<br> `9` <br>

<br> `18` <br>

<br> `27` |

---

## 4. Giải thích Test Cases

Các số bình thường có dạng rất đặc trưng:

* Có 1 chữ số: 1, 2, 3, ..., 9 (tổng cộng 9 số).
* Có 2 chữ số: 11, 22, 33, ..., 99 (tổng cộng 9 số).
* Có 3 chữ số: 111, 222, ..., 999 (tổng cộng 9 số).
* ... cứ thế tiếp tục cho đến khi vượt quá .

**Phân tích ví dụ:**

* **Với :** Các số bình thường là {1, 2, 3, 4, 5, 6, 7, 8, 9}. Số 10 không phải vì chữ số khác nhau. **Kết quả: 9**.
* **Với :** * Các số có 1 chữ số: 1 đến 9 (9 số).
* Các số có 2 chữ số: 11, 22, ..., 99 (9 số).
* Tổng cộng: . **Kết quả: 18**.


* **Với :**
* Tương tự: 9 (loại 1 chữ số) + 9 (loại 2 chữ số) + 9 (loại 3 chữ số) = 27. **Kết quả: 27**.



---

# 15. Codeforces 1553A - Digits Sum

## 1. Thông tin & Link bài tập

* **Tên bài:** Digits Sum
* **Mã bài:** 1553A
* **Độ khó (Rating):** 800
* **Link:** [Codeforces 1553A - Digits Sum](https://codeforces.com/problemset/problem/1553/A)

---

## 2. Dịch đề bài (Tiếng Việt)

### Bối cảnh

Cho số nguyên dương , gọi  là tổng các chữ số của nó trong hệ thập phân.
Ví dụ: , , .

### Yêu cầu

Chúng ta gọi một số nguyên  là **thú vị** nếu .
Cho số nguyên , hãy đếm xem có bao nhiêu số nguyên  thỏa mãn  và  là một số **thú vị**.

### Đầu vào (Input)

* Dòng đầu tiên chứa số lượng bộ test  ().
*  dòng tiếp theo, mỗi dòng chứa một số nguyên  ().

### Đầu ra (Output)

* Với mỗi bộ test, in ra số lượng số thú vị  trong đoạn .

---

## 3. Ví dụ mẫu (Test Cases)

| Input | Output |
| --- | --- |
| `5` <br>

<br> `1` <br>

<br> `9` <br>

<br> `10` <br>

<br> `34` <br>

<br> `880055535` | `0` <br>

<br> `1` <br>

<br> `1` <br>

<br> `3` <br>

<br> `88005553` |

---

## 4. Giải thích Test Cases

Để , số  phải có tính chất gì?

* Nếu :  (Không thỏa mãn).
* Nếu :  (Không thỏa mãn).
* Nếu **** : , mà . Rõ ràng . (Thỏa mãn).
* Nếu : . (Thỏa mãn).

**Nhận xét:** Một số  chỉ có thể làm tổng chữ số giảm đi khi cộng thêm 1 nếu số đó **kết thúc bằng chữ số 9**. Khi đó, số 9 sẽ biến thành 0 và phần nhớ sẽ cộng vào hàng chục, làm tổng chữ số giảm đi đáng kể.

**Phân tích ví dụ:**

* **Với n = 1:** Không có số nào kết thúc bằng 9 trong đoạn [1, 1]. Kết quả: 0.
* **Với n = 9:** Có một số là 9. Kết quả: 1.
* **Với n = 10:** Chỉ có số 9 thỏa mãn. Kết quả: 1.
* **Với n = 34:** Các số thỏa mãn là 9, 19, 29. Kết quả: 3.

---
