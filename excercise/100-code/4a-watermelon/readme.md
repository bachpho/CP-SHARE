Đây là bản dịch tiếng Việt cho bài toán kinh điển này:

## A. Dưa hấu (Watermelon)

**Giới hạn thời gian:** 1 giây
**Giới hạn bộ nhớ:** 64 megabytes

---

Vào một ngày hè nóng nực, Pete và người bạn Billy quyết định đi mua một quả dưa hấu. Họ đã chọn quả to nhất và chín nhất theo ý mình. Sau đó, quả dưa được đưa lên cân và kim đồng hồ chỉ số **** cân (kilos). Họ vội vã chạy về nhà vì đang khát khô cả cổ, nhưng khi định bổ dưa thì lại gặp phải một vấn đề nan giải.

Pete và Billy là những người cực kỳ thích các **số chẵn**. Đó là lý do tại sao họ muốn chia quả dưa sao cho mỗi phần của hai người đều có khối lượng là một số chẵn, đồng thời không nhất thiết hai phần đó phải bằng nhau. Vì quá mệt và muốn ăn càng sớm càng tốt, bạn hãy giúp họ kiểm tra xem liệu có thể chia quả dưa theo cách họ muốn hay không. Tất nhiên, mỗi người đều phải nhận được một phần có khối lượng dương (lớn hơn 0).

### Đầu vào

Dòng đầu tiên (và duy nhất) chứa số nguyên **w** () — khối lượng quả dưa hấu mà hai người đã mua.

### Đầu ra

In ra **YES** nếu họ có thể chia quả dưa thành hai phần, mỗi phần có khối lượng là một số chẵn; ngược lại thì in ra **NO**.

---

### Ví dụ

**Đầu vào:**
`8`

**Đầu ra:**
`YES`

**Ghi chú:**
Ví dụ, họ có thể chia quả dưa thành hai phần lần lượt là 2kg và 6kg (hoặc một cách khác là mỗi phần 4kg).

---


## Câu hỏi gợi mở.


1. **Về định nghĩa số chẵn:** Nếu bạn cộng hai số chẵn bất kỳ lại với nhau, kết quả thu được sẽ luôn là một số chẵn hay số lẻ? Từ đó, ta có thể suy ra ngay khối lượng tổng  bắt buộc phải là số mấy thì mới có cơ hội chia được?
2. **Trường hợp "bẫy":** Số **2** là một số chẵn, nhưng nếu quả dưa nặng đúng  kg, liệu Pete và Billy có thể chia nó thành hai phần mà mỗi phần đều là một **số chẵn dương** (lớn hơn 0) không?
3. **Điều kiện đủ:** Ngoài trường hợp đặc biệt ở câu hỏi số 2, liệu có số chẵn nào khác mà không thể chia thành hai số chẵn nhỏ hơn không? Hay chỉ cần  là số chẵn và lớn hơn một giá trị nào đó là đủ?

<details>
  <summary>Nhấn vào đây để xem code mẫu</summary>

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {
      int w;
      cin >> w;
      if (w > 2 && w % 2 == 0) cout << "YES";
      else cout << "NO";
      return 0;
  }