add_executable(bubble_sort BubbleSortTest.cpp)
target_link_libraries(bubble_sort ${GTEST_LIB} )
add_test(NAME bubble_sort COMMAND bubble_sort)

add_executable(selection_sort SelectionSortTest.cpp)
target_link_libraries(selection_sort ${GTEST_LIB} )
add_test(NAME selection_sort COMMAND selection_sort)

add_executable(insertion_sort InsertionSortTest.cpp)
target_link_libraries(insertion_sort ${GTEST_LIB} )
add_test(NAME insertion_sort COMMAND insertion_sort)

add_executable(quick_sort QuickSortTest.cpp)
target_link_libraries(quick_sort ${GTEST_LIB} )
add_test(NAME quick_sort COMMAND quick_sort)

add_executable(merge_sort MergeSortTest.cpp)
target_link_libraries(merge_sort ${GTEST_LIB} )
add_test(NAME merge_sort COMMAND merge_sort)

add_executable(heap_sort HeapSortTest.cpp)
target_link_libraries(heap_sort ${GTEST_LIB} )
add_test(NAME heap_sort COMMAND heap_sort)
