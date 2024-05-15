#include <vector>

// 思想：
// 数组的前面是排序的，后面是未排序的
// 初始情况：有序数量是1个，未排序数量是n-1个
// 每轮从未排序的里面选个最小的，插入到已经排序的里面
// 需要经过n-1轮
template <typename T> void sort(std::vector<T> &data) {
  if (data.size() < 2)
    return;

  // 经过n-1轮
  for (size_t pass = 1; pass <= data.size() - 1; pass++) {
    size_t unsortPos = pass;
    for (size_t poc = unsortPos; poc > 0; poc--) {
      if (data[poc] > data[poc - 1])
        break;

      // 交换
      T temp = data[poc];
      data[poc] = data[poc - 1];
      data[poc - 1] = temp;
    }
  }
}
