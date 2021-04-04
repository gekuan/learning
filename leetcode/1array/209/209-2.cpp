#include <iostream>
#include <vector>

int Solution(std::vector<int> &data, int value) {
  int size = data.size();
  int result = INT32_MAX;
  int i = 0;
  int length = 0;
  int sum = 0;
  for (int j = 0; j < size; ++j) {
    sum += data[j];
    while (sum >= value) {
      length = j - i + 1;
      result = length < result ? length : result;
      sum -= data[i++];
    }
  }
  return result == INT32_MAX ? 0 : result;
}

int main() {
  std::vector<int> data{2, 3, 1, 2, 4, 3};
  int value = 7;
  int result = Solution(data, value);
  std::cout << "result: " << result << std::endl;
  return 0;
}