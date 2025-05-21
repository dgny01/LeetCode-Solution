#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        if (seen.count(diff)) {
            return { seen[diff], i };
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    std::vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    std::vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        std::cout << "Sonuç indeksleri: [" << result[0] << ", " << result[1] << "]\n";
    }
    else {
        std::cout << "Çözüm bulunamadý.\n";
    }

    return 0;
}