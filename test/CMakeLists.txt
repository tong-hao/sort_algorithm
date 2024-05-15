add_executable(bubble_sort BubbleSortTest.cpp)
target_link_libraries(bubble_sort ${GTEST_LIB} )
add_test(NAME bubble_sort COMMAND bubble_sort)
