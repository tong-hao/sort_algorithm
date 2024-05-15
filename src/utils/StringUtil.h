#include <iostream>
#include <vector>

template <typename T>
std::string toString(const std::vector<T>& data){
    std::string ret;

    // 防止data为空
    for(size_t i = 1;i <= data.size(); i++) {
        ret += std::to_string(data[i-1]);
        ret += ",";
    }

    return ret;
}

template <typename T>
void print(const std::vector<T>& data){
    std::cout << toString(data) << std::endl;
}
