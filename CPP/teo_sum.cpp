#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) {
        return 1;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int target;
    if (!(std::cin >> target)) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                std::cout << i << " " << j << "\n";
                return 0;
            }
        }
    }

    std::cout << "No pair found\n";
    return 0;
}
