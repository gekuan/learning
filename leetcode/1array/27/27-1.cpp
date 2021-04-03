#include <iostream>
#include <vector>

int Solution(std::vector<int> &data, int value) {
  int size = data.size();
  for (int i = 0; i < size; ++i) {
    if (value == data[i]) {
      for (int j = i; j + 1 < size; ++j) {
        data[j] = data[j + 1];
      }
      i--;
      size--;
    }
  }
  return size;
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