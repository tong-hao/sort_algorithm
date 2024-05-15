#include <vector>

template <typename T> void helpSort(std::vector<T> &data, int begin, int end) {
  if (begin >= end)
    return;

  int mid = begin + (end - begin) / 2;

  // 1. 先将数据分成两半
  helpSort(data, begin, mid);
  helpSort(data, mid + 1, end);

  // 2. 再将两半进行合并
  std::vector<T> left_arr;
  left_arr.assign(data.begin() + begin, data.begin() + mid + 1);
  auto &right_arr = data;

  int l = 0;
  int r = mid + 1;
  int i = begin;
  while (l < left_arr.size() && r <= end) {
    if (left_arr[l] < right_arr[r]) {
      data[i++] = left_arr[l++];
    } else {
      data[i++] = right_arr[r++];
    }
  }
  while (l < left_arr.size()) {
    data[i++] = left_arr[l++];
  }
  while (r < right_arr.size()) {
    data[i++] = right_arr[r++];
  }
}

template <typename T> void sort(std::vector<T> &data) {
  if (data.size() <= 1) {
    return;
  }
  helpSort(data, 0, data.size() - 1);
}
