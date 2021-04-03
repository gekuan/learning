#include <iostream>
#include <vector>

int Solution(std::vector<int> &data, int value) {
  int size = data.size();
  int slow_index = 0;
  for (int fast_index = 0; fast_index < size; ++fast_index) {
    if (data[fast_index] != value) {
      data[slow_index++] = data[fast_index];
    }
  }
  return slow_index;
}

int main() {
  std::vector<int> data{1, 2, 3, 4, 2, 3, 5};
  int value = 2;
  int size = Solution(data, value);
  for (int i = 0; i < size; ++i) {
    std::cout << data[i] << ", ";
  }
  std::cout << std::endl;
  std::cout << "size: " << size << std::endl;
  return 0;
}