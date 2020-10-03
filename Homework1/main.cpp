#include <iostream>
#include <vector>
#include "Complex.h"

void sort(std::vector<Complex>& nums) {
  bool isSwaped = true;
  while (isSwaped) {
    isSwaped = false;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] > nums[i + 1]){
        std::swap(nums[i], nums[i + 1]);
        isSwaped = true;
      }
    }
  }
}

int main() {
  std::vector<Complex> nums = { Complex(1, 2), Complex(3, 2), Complex(1, 2), Complex(1, 1), Complex(5, 5), Complex(1, 0) };

  sort(nums);

  for (int i = 0; i < nums.size(); ++i) {
    std::cout << nums[i].abs() << ' ';
  }
  std::cout << std::endl;
}
