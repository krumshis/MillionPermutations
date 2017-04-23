#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    std::vector<int> my_nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int count = 0;
	cout << "Permutation #" << count + 1 << endl;
	for (auto num : my_nums) {
	    cout << num << " ";
	}
	cout << endl;
	while (count < 1000000) {
	   std::next_permutation(my_nums.begin(), my_nums.end());
	   count++;
	}
	cout << "Permutation #" << count << endl;
	for (auto num : my_nums) {
	    cout << num << " ";
	}
	return 0;
}
