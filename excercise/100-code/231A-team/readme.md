
## [A. Đội (Team)](https://codeforces.com/problemset/problem/231/A)

**Giới hạn thời gian:** 2 giây

**Giới hạn bộ nhớ:** 256 megabytes

Một nhóm gồm ba người bạn thân là Petya, Vasya và Tonya quyết định thành lập một đội để tham gia các cuộc thi lập trình. Những người bạn này thường xuyên gặp phải những bài toán khó trong các kỳ thi. Với mỗi bài toán, họ sẽ thảo luận và nếu có **ít nhất hai người** trong số họ chắc chắn về lời giải, họ sẽ quyết định nộp bài toán đó. Ngược lại, họ sẽ bỏ qua bài toán.

Trong một cuộc thi nọ, ban tổ chức đưa ra **n** bài toán. Với mỗi bài toán, bạn biết được người bạn nào chắc chắn về lời giải và người nào không. Nhiệm vụ của bạn là giúp nhóm bạn xác định xem họ sẽ nộp tổng cộng bao nhiêu bài toán.

### Đầu vào

* Dòng đầu tiên chứa một số nguyên  () — số lượng bài toán trong cuộc thi.
*  dòng tiếp theo, mỗi dòng chứa ba số nguyên. Mỗi số chỉ có thể là **0** hoặc **1**.
* Số đầu tiên là 1 nếu Petya chắc chắn về lời giải, ngược lại là 0.
* Số thứ hai là 1 nếu Vasya chắc chắn về lời giải, ngược lại là 0.
* Số thứ ba là 1 nếu Tonya chắc chắn về lời giải, ngược lại là 0.



### Đầu ra

In ra một số nguyên duy nhất — tổng số bài toán mà nhóm bạn sẽ nộp.

---

### Ví dụ

**Đầu vào:**

```
3
1 1 0
1 1 1
1 0 0

```

**Đầu ra:**

```
2

```

**Ghi chú:**
Ở bài toán thứ nhất, Petya và Vasya chắc chắn (2 người), nên họ sẽ nộp bài.
Ở bài toán thứ hai, cả ba người đều chắc chắn (3 người), nên họ sẽ nộp bài.
Ở bài toán thứ ba, chỉ có Petya chắc chắn (1 người), nên họ sẽ không nộp bài.
Tổng cộng có 2 bài được nộp.

---

## Câu hỏi gợi mở


1. **Làm sao để đếm số người đồng ý?** Đối với mỗi dòng (mỗi bài toán), chúng ta có 3 con số (0 hoặc 1). Làm thế nào để tính tổng số người chắc chắn về lời giải một cách nhanh nhất?

	<details>
	<summary>Đáp án</summary>
	Bạn chỉ cần cộng 3 số đó lại với nhau. Nếu tổng , bài toán đó thỏa mãn.
	</details>

2. **Cần lưu trữ toàn bộ dữ liệu không?** Bạn có cần phải dùng mảng để lưu lại tất cả  dòng rồi mới tính toán, hay có thể tính ngay khi đang đọc dữ liệu?

	<details>
	<summary>Đáp án</summary>
	Bạn có thể xử lý từng dòng một ngay khi vừa đọc vào để tiết kiệm bộ nhớ và làm code gọn hơn.
	
	</details>


3. **Vòng lặp:** Bạn sẽ sử dụng cấu trúc vòng lặp nào để duyệt qua  bài toán?

	<details>
	<summary>Đáp án</summary>
	 Vòng lặp `for` từ 1 đến  là lựa chọn phổ biến và rõ ràng nhất.
	
	</details>




---

## Code hướng dẫn

<details>
<summary>Nhấn vào đây để xem code mẫu (C++)</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Đọc số lượng bài toán

    int total_problems_to_solve = 0;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t; // Đọc trạng thái của 3 người bạn

        // Nếu tổng số người chắc chắn >= 2
        if (p + v + t >= 2) {
            total_problems_to_solve++;
        }
    }

    cout << total_problems_to_solve << endl;

    return 0;
}

```

</details>

---
