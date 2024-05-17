#pragma once

#include <vector>

#include "utils/StringUtil.h"

// 堆化函数
// 将双亲调整为最大元素
template <typename T> void heapify(std::vector<T> &data, int begin, int end) {
  if (begin >= end) {
    return;
  }

  int root = begin;
  int left = 2 * begin + 1;
  int right = left + 1;

  // 从双亲、左孩子、右孩子中找最大的
  int max = root;
  if (left <= end && data[left] > data[max]) {
    max = left;
  }
  if (right <= end && data[right] > data[max]) {
    max = right;
  }
  if (max == root) {
    return;
  }

  // 将双亲调整为最大的
  std::swap(data[root], data[max]);

  // 继续调整max位置的结点
  heapify(data, max, end);
}

template <typename T> void sort(std::vector<T> &data) {
  if (data.size() <= 1)
    return;

  // 1. Construct heap
  // root结点是最大的
  // 注意：root >= 0
  // 从最后一个叶子结点开始
  for (int root = data.size() / 2 - 1; root >= 0; root--) {
    heapify(data, root, data.size() - 1);
    print<T>(data);
  }

  // 2. pop and heapify loop
  // 主要：end > 0，因为最后一个元素不需要调整
  for (int end = data.size() - 1; end > 0; end--) {
    std::cout << "->" << end << std::endl;
    // 将root结点调整到end位置
    std::swap(data[0], data[end]);
    print<T>(data);

    // 再次执行堆化函数
    heapify(data, 0, end - 1);
    print<T>(data);
  }
}
