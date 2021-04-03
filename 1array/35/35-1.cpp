#include <iostream>
#include <vector>

int Solution(std::vector<int> &data, int value) {
  int size = data.size();
  for (int i = 0; i < size; ++i) {
    if (data[i] >= value) {
      return i;
    }
  }
  return size;
}

int main() {
  std::vector<int> data{1, 3, 5, 6};
  int value = 7;
  int size = Solution(data, value);
  std::cout << "size: " << size << std::endl;
  return 0;
}