import <cassert>;
import <iostream>;
import <algorithm>;
//import <vector> - no need as sorter exports it

import sorter; 

int main() {

	std::vector v = { 1,4,5,3,4,55,66,12,42 };
	std::vector sorted = sorter::get_sorted_copy(v);
	std::ranges::copy(sorted, std::ostream_iterator<int>{std::cout, ", "});
	std::ranges::sort(v);
	assert(sorted == v);
}