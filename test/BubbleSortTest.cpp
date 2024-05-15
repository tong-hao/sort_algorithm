#include <gtest/gtest.h>
#include <iostream>

#include "BubbleSort.h"
#include "utils/StringUtil.h"

TEST(BubbleSort, BaseVectorInt) {
  std::vector<int> data{5, 6, 4, 3, 2, 1};
  sort<int>(data);
  ASSERT_EQ(data, std::vector<int>({1, 2, 3, 4, 5, 6}));
}

TEST(BubbleSort, BaseVectorDouble) {
  std::vector<double> data{5.1, 6.1, 4.1, 3.1, 2.2, 2.1};
  sort<double>(data);
  ASSERT_EQ(data, std::vector<double>({2.1, 2.2, 3.1, 4.1, 5.1, 6.1}));
}

TEST(BubbleSort, OneVectorElement) {
  std::vector<int> data{5};
  sort<int>(data);
  ASSERT_EQ(data, std::vector<int>({5}));
}

TEST(BubbleSort, EmptyVector) {
  std::vector<int> data{};
  sort<int>(data);
  ASSERT_EQ(data, std::vector<int>());
}
