# Những thuật toán tìm kiếm thông dụng

- Tìm kiếm tuyến tính

- Tìm kiếm nhị phân.

## Tìm kiếm nhị phân.

Chúng ta sẽ cùng khám phá **Tìm kiếm Nhị phân (Binary Search)** — một trong những thuật toán quan trọng và mạnh mẽ nhất trong lập trình thi đấu. ⚡

Nếu Tìm kiếm Tuần tự là việc lật từng trang sách, thì Tìm kiếm Nhị phân giống như việc bạn mở một cuốn từ điển: bạn mở vào giữa, xem từ mình cần nằm ở nửa đầu hay nửa sau, rồi lặp lại việc chia đôi đó cho đến khi tìm thấy mục tiêu.

### 🔑 Điều kiện tiên quyết (Quan trọng nhất!)

Để sử dụng được Tìm kiếm Nhị phân, mảng của bạn **bắt buộc phải được sắp xếp** (tăng dần hoặc giảm dần). Nếu mảng lộn xộn, "phép thuật" chia đôi sẽ không hoạt động.

### 🧩 Cách hoạt động (Cơ chế Chia để trị)

1. **Xác định trung tâm:** Tìm phần tử ở chính giữa mảng. 📍
2. **So sánh:**
* Nếu phần tử ở giữa đúng là mục tiêu: Chúc mừng, ta dừng lại! 🎉
* Nếu mục tiêu **lớn hơn** phần tử ở giữa: Ta bỏ qua toàn bộ nửa bên trái, chỉ tìm ở nửa bên phải.
* Nếu mục tiêu **nhỏ hơn** phần tử ở giữa: Ta bỏ qua toàn bộ nửa bên phải, chỉ tìm ở nửa bên trái.


3. **Lặp lại:** Tiếp tục chia đôi phần còn lại cho đến khi tìm thấy hoặc không còn gì để chia.

### 🕰️ Độ phức tạp thời gian

Thay vì kiểm tra  phần tử như Tìm kiếm Tuần tự, mỗi bước của Tìm kiếm Nhị phân loại bỏ được **một nửa** số lượng phần tử còn lại.

Giả sử bạn có 1024 phần tử ():

* Bước 1: Còn 512
* Bước 2: Còn 256
* ...
* Bước 10: Còn 1

Chỉ mất tối đa 10 bước để tìm thấy mục tiêu trong 1024 phần tử! Trong khi Tìm kiếm Tuần tự có thể mất tới 1024 bước.

Một phép toán nào ngược lại với lũy thừa $2^x$, mô tả về độ phức tạp của thuật toán. Đó là $\log_2(n)$.

Trong lập trình thi đấu, con số này cực kỳ ấn tượng. Ví dụ, nếu  (1 triệu phần tử), Tìm kiếm Tuần tự có thể cần tới 1 triệu phép so sánh, nhưng Tìm kiếm Nhị phân chỉ cần tối đa khoảng **20 bước**. Sự chênh lệch này giống như việc đi bộ xuyên Việt so với việc bay bằng máy bay phản lực vậy! ✈️

Trước khi chúng ta đi sâu vào cách cài đặt code, hãy cùng nhìn vào **Bức tranh toàn cảnh** của chương này qua một ví dụ thực tế hơn:

### 📸 Hình ảnh ẩn dụ: "Cây thước kẻ thông minh"

Hãy tưởng tượng bạn đang tìm một vạch chia cụ thể trên một cây thước dài. Thay vì đếm từng vạch từ số 0, bạn luôn cắt đôi đoạn đang xét.

* Điểm `left` là đầu thước.
* Điểm `right` là cuối thước.
* Mỗi lần "chặt đôi", bạn thu hẹp phạm vi tìm kiếm lại cực nhanh.

---

### 🛠️ Chi tiết kỹ thuật: Cài đặt thuật toán

Để cài đặt Tìm kiếm Nhị phân mà không bị lỗi (đặc biệt là lỗi lặp vô hạn hoặc bỏ sót phần tử), chúng ta thường dùng 3 biến chỉ số: `low` (thấp), `high` (cao) và `mid` (giữa).

Dưới đây là cấu trúc logic cơ bản:

1. Thiết lập `low = 0`, `high = n - 1`.
2. Trong khi `low <= high`:
* Tính `mid = (low + high) / 2`.
* Nếu `a[mid] == target`: Trả về kết quả.
* Nếu `a[mid] < target`: Thu hẹp về phía bên phải (`low = mid + 1`).
* Nếu `a[mid] > target`: Thu hẹp về phía bên trái (`high = mid - 1`).



> **💡 Lưu ý** Trong lập trình thi đấu, khi  rất lớn (ví dụ ), việc tính `mid = (low + high) / 2` có thể gây ra một lỗi rất phổ biến gọi là **"Integer Overflow"** (tràn số nguyên) nếu `low + high` vượt quá giới hạn của kiểu dữ liệu.

> Sử dụng kiểu dữ liệu `long long` trong C++ (hoặc các kiểu tương đương trong ngôn ngữ khác) giúp chúng ta có không gian lưu trữ rộng hơn, tránh việc cộng hai số lớn bị vượt ngưỡng.

Tuy nhiên, có một cách viết toán học giúp phép tính luôn nằm trong phạm vi của các biến hiện tại mà không cần lo lắng về việc cộng dồn trước khi chia. Thay vì viết:


Chúng ta có thể viết theo cách này:


### 🎨 Phép ẩn dụ: "Đo khoảng cách"

Hãy tưởng tượng bạn đang đứng ở vạch số `low` và muốn tìm điểm giữa tới vạch `high`. Thay vì cộng cả hai quãng đường lại rồi chia đôi (dễ làm con số bùng nổ), bạn chỉ cần tính **khoảng cách** giữa hai điểm đó , chia đôi khoảng cách này, rồi cộng thêm vào vị trí `low` hiện tại của bạn. Kết quả vẫn là điểm chính giữa, nhưng con số trung gian  luôn nhỏ hơn hoặc bằng `high`.

### code tham khảo

```cpp
	int l = 0;
	int r = n-1;
	while (l <= r){
		int mid = l + (r - l)/2;

		if (a[mid] == k){
			break;
		}

		if (a[mid] < k){
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}

```
