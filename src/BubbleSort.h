#include <vector>

// 思想：
// 数组前面是排序的，后面是未排序的
// 每轮从后面冒出一个最小的泡泡，放到前面
// 需要经过n轮冒泡
template <typename T> void sort(std::vector<T> &data) {

  for (size_t pass = 1; pass <= data.size(); pass++) {
    size_t targetPos = pass - 1;

    // 冒个最小泡泡放到targetPos位置上
    for (size_t i = data.size() - 1; i > targetPos; i--) {
      if (data[i] < data[i - 1]) {
        // 交换
        T temp = data[i - 1];
        data[i - 1] = data[i];
        data[i] = temp;
      }
    }
  }
}
