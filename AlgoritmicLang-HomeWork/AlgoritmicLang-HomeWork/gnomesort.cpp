#include "gnomesort.h"

vector <int> gnomesort(vector <int> vec) {
	auto clock_start = chrono::high_resolution_clock::now();

	int i = 0;
	int j = 0;
	while (i < vec.size()) {
		if (i == 0 || vec[i - 1] <= vec[i]) {
			j++;
			i = j;
		}			
		else {
			int tmp = vec[i];
			vec[i] = vec[i - 1];
			vec[i - 1] = tmp;
			i--;
		}
	}

	auto clock_stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(clock_stop - clock_start);
	cout << duration.count();
	return vec;
}