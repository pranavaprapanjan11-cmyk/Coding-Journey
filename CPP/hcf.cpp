#include <vector>
#include <algorithm>

class solution {
public:
    int hcf(int a, int b) {
        return b == 0 ? a : hcf(b, a % b);
    }

    int findgcd(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        return hcf(nums[0], nums[nums.size() - 1]);
    }
};
