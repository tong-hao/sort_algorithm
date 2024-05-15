#include <vector>

// 思想：
// 数组的前部分是有序的，后部分是未排序的
// 一开始有序数量是0个，未排序数量是n个
// 经过一轮排序后，有序数量增加1，未排序数量减少1
// 每轮从未排序的里面选个最小的
// 一共需要经过n轮排序
template <typename T> void sort(std::vector<T> &data) {

  for (size_t pass = 1; pass <= data.size(); pass++) {
    size_t targetPos = pass - 1;

    // 从无序中挑选最小个的苹果，放入到 targetPos 位置
    size_t picPos = targetPos;
    for (size_t i = data.size() - 1; i > targetPos; i--) {
      if (data[i] < data[picPos]) {
        picPos = i;
      }
    }

    // 交换位置
    if (targetPos != picPos) {
      T temp = data[targetPos];
      data[targetPos] = data[picPos];
      data[picPos] = temp;
    }
  }
}
