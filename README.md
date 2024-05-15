# 排序算法

本repo是用c++实现的10种排序算法，主要包含：
- 冒泡排序
- 选择排序
- 插入排序
- 归并排序
- 堆排序
- 快速排序
- 希尔排序
- 计数排序
- 桶排序
- 基数排序


## 时间复杂度

| 算法名称 | 时间复杂度 |
| :------- | :--------- |
| 冒泡排序 | O(n^2)     |
| 选择排序 | O(n^2)     |
| 插入排序 | O(n^2)     |
| 归并排序 | O(n*logn)  |
| 堆排序   | O(n*logn)  |
| 快速排序 | O(n*logn)  |
| 希尔排序 | O(n*logn)  |
| 计数排序 | O(n+k)     |
| 桶排序   | O(n+k)     |
| 基数排序 | O(n+k)     |

## 依赖
- glog
- cmake
- google test

## 编译

```bash
mkdir build
cd build
cmake ..
make
```