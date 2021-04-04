#include <iostream>
#include <vector>

int Solution(std::vector<int> &data, int value) {
  int size = data.size();
  int min_length = INT32_MAX;
  for (int i = 0; i < size; ++i) {
    int sum = 0;
    for (int j = i; j < size; ++j) {
      sum += data[j];
      if (sum >= value) {
        int len = j - i + 1;
        if (len < min_length) {
          min_length = len;
        }
      }
    }
  }
  return (min_length == INT32_MAX ? 0 : min_length);
}

int main() {
  std::vector<int> data{2, 3, 1, 2, 4, 3};
  int value = 7;
  int result = Solution(data, value);
  std::cout << "result: " << result << std::endl;
  return 0;
}