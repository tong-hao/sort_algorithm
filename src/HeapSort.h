#pragma once

#include <vector>

#include "utils/StringUtil.h"

#include <vector>
#include <iostream>

// 堆化函数
template <typename T>
void heapify(std::vector<T>& vct, int r, int n){
    int root = r;
    int left = 2*r + 1;
    int right = 2*r + 2;

    int max = root;
    if(left < n && vct[left] > vct[max]) {
        max = left;
    }
    if(right < n && vct[right] > vct[max]) {
        max = right;
    }

    if(max != root) {
        std::swap(vct[root], vct[max]);
        h(vct, max, n);
    }
}

template <typename T>
void sort(std::vector<T>& vct) {
    // 1.construct heap
    int n = vct.size();
    for(int i = vct.size()/2-1; i >=0; i--) {
        h(vct, i, n);
    }

    // 2. pop and heapify loop
    for(int i = n -1; i >=0; i--){
        std::swap(vct[i], vct[0]);
        h(vct, 0, i);
    }
}

