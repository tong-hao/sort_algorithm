#include <iostream>
#include <gtest/gtest.h>

#include "BubbleSort.h"
#include "utils/StringUtil.h"

TEST(BubbleSort, BaseVector) {
    std::vector<int> data{5,6,4,3,2,1};
    sort<int>(data);
    ASSERT_EQ(data, std::vector<int>({1,2,3,4,5,6}));
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

