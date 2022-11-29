#include "shakersort.h"

vector <int> shakersort(vector <int> vec) {
	auto clock_start = chrono::high_resolution_clock::now();

		int left = 0;
		int right = vec.size() - 1;
		while (left <= right) {
			for (int i = right; i > left; --i) {
				if (vec[i - 1] > vec[i]) {
					swap(vec[i - 1], vec[i]);
				}
			}
			++left;
			for (int i = left; i < right; ++i) {
				if (vec[i] > vec[i + 1]) {
					swap(vec[i], vec[i + 1]);
				}
			}
			--right;
		}

	auto clock_stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(clock_stop - clock_start);
	cout << duration.count();
	return vec;
}