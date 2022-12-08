#include "bucketsort.h"

vector <int> bucketsort(vector <int> vec) {
	auto clock_start = chrono::high_resolution_clock::now();

	sort(vec.begin(), vec.end());

	auto clock_stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(clock_stop - clock_start);
	cout << duration.count();
	return vec;
}