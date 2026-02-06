

## [A. Bit++](https://codeforces.com/problemset/problem/282/A)

**Giới hạn thời gian:** 1 giây

**Giới hạn bộ nhớ:** 256 megabytes

---

Ngôn ngữ lập trình cổ điển Bit++ cực kỳ phổ biến nhờ sự đơn giản của nó.

Ngôn ngữ này chỉ có duy nhất một biến, gọi là **x**. Ban đầu, giá trị của biến **x** bằng **0**. Ngoài ra, ngôn ngữ này chỉ có hai phép toán (operator):

* Phép toán `++` làm tăng giá trị của biến **x** thêm **1** đơn vị.
* Phép toán `--` làm giảm giá trị của biến **x** xuống **1** đơn vị.

Một câu lệnh (statement) trong ngôn ngữ Bit++ là một chuỗi bao gồm chính xác một phép toán và một biến **x**. Câu lệnh được viết mà không có khoảng trắng. Nghĩa là, chỉ có 4 câu lệnh hợp lệ: `++X`, `X++`, `--X`, và `X--`.

Một chương trình trong ngôn ngữ Bit++ là một dãy các câu lệnh. Bạn được cho một chương trình, hãy cho biết giá trị cuối cùng của biến **x** sau khi thực thi toàn bộ chương trình đó.

### Đầu vào

* Dòng đầu tiên chứa một số nguyên  () — số lượng câu lệnh trong chương trình.
*  dòng tiếp theo, mỗi dòng chứa một câu lệnh. Mỗi câu lệnh chứa chính xác một biến `X` và một phép toán (`++` hoặc `--`). Các ký tự có thể là chữ hoa hoặc chữ thường (tức là `x` hoặc `X`).

### Đầu ra

In ra một số nguyên duy nhất — giá trị cuối cùng của **x**.

---

### Ví dụ

**Ví dụ 1:**

* **Đầu vào:**
```
1
++X

```


* **Đầu ra:** `1`

**Ví dụ 2:**

* **Đầu vào:**
```
2
X++
--X

```


* **Đầu ra:** `0`

---

## Câu hỏi gợi mở

1. **Gợi ý về bản chất câu lệnh:** Có sự khác biệt nào giữa `++X` và `X++` trong bài toán này không?

<details>
<summary>Trả lời</summary>
Trong ngôn ngữ C++ thông thường, tiền tố (prefix) và hậu tố (postfix) có sự khác biệt về giá trị trả về ngay tại thời điểm đó. Tuy nhiên, trong bài toán Bit++ này, cả hai đều chỉ có một mục đích duy nhất là tăng giá trị của X lên 1 sau khi thực hiện xong câu lệnh. Vì vậy, ta không cần quan tâm đến vị trí của dấu `+` hay `-`.
</details>

2. **Làm sao để nhận biết phép toán nhanh nhất?** Thay vì kiểm tra toàn bộ chuỗi (ví dụ: `++X`, `X++`), ta có thể chỉ cần kiểm tra một ký tự duy nhất không?

<details>
<summary>Trả lời</summary>
Có! Trong cả 4 trường hợp (`++X`, `X++`, `--X`, `X--`), ký tự ở giữa (vị trí `s[1]`) luôn luôn là dấu của phép toán đó (`+` hoặc `-`). Bạn chỉ cần kiểm tra ký tự này để quyết định cộng hay trừ.
</details>

3. **Lưu ý về kiểu chữ:** Đề bài nói có thể là `x` hoặc `X`, liệu ta có cần xử lý chuyển đổi kiểu chữ không?

<details>
<summary>Trả lời</summary>
Không thực sự cần thiết nếu bạn chỉ kiểm tra ký tự dấu (`+` hoặc `-`). Các dấu này không có khái niệm hoa hay thường, nên việc người dùng nhập `x++` hay `X++` không ảnh hưởng đến logic nhận diện phép toán của bạn.
</details>

---

<details>
<summary>Nhấn vào đây để xem code mẫu</summary>

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x = 0;
    string s;
    
    while (n--) {
        cin >> s;
        // Kiểm tra ký tự ở giữa chuỗi để xác định phép toán
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    
    cout << x << endl;
    
    return 0;
}

```

</details>

