module sorter;

import <ranges>;
import <algorithm>;

namespace sorter {
    std::vector<int> get_sorted_copy(std::vector<int> vec) {
        std::ranges::sort(vec);
        return vec;
    }
}
