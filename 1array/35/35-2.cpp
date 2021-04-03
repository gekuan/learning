#include <iostream>
#include <vector>

int Solution(std::vector<int> &data, int value) {
  int size = data.size();
  int left_index = 0;
  int right_index = size - 1;
  while (left_index <= right_index) {
    int middle_index = (right_index - left_index) / 2;
    if (data[middle_index] > value) {
      left_index = middle_index + 1;
    } else if (data[middle_index] < value) {
      right_index = middle_index - 1;
    } else if (data[middle_index] == value) {
      return middle_index;
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