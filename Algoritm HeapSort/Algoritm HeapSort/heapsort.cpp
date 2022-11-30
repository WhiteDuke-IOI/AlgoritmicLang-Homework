#include "heapsort.h"

vector <int> heapsort(vector <int> vec) {
	auto clock_start = chrono::high_resolution_clock::now();

		std::make_heap(vec.begin(), vec.end());
		for (auto i = vec.end(); i != vec.begin(); --i) {
			std::pop_heap(vec.begin(), i);
		}
	

	auto clock_stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(clock_stop - clock_start);
	cout << duration.count();
	return vec;
}