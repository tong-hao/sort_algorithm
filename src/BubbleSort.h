#include <vector>

template <typename T>
void sort(std::vector<T>& data){

    for(size_t pass = 1; pass <= data.size(); pass++) {
        size_t currPos = pass -1;
        
        // 冒个大泡泡放到currPos位置上
        for(size_t i = data.size() - 1; i > currPos; i--){
            if(data[i] < data[i-1]) {
                // 交换
                T temp = data[i-1];
                data[i-1] = data[i];
                data[i] = temp;
            }
        }
    }

}

