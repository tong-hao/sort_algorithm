#include <vector>

template <typename T> void helpSort(std::vector<T> &data, int begin, int end) {
  if (begin >= end)
    return;

  // 枢轴元素选择第一个
  int pivot = begin;

  // 记录小于枢轴元素的最后一个位置
  int last = begin;

  // 将小于枢轴元素的放到左边
  for (int i = begin + 1; i <= end; i++) {
    if (data[i] < data[pivot]) {
      last++;
      std::swap(data[i], data[last]);
    }
  }
  std::swap(data[pivot], data[last]);

  helpSort(data, begin, last - 1);
  helpSort(data, last + 1, end);
}

template <typename T> void sort(std::vector<T> &data) {
  helpSort(data, 0, data.size() - 1);
}
