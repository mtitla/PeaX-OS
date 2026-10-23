#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {100,200,300,400};
    std::cout << nums.at(0) << '\n';
    std::cout << nums[0] << '\n';
    return 0;
}