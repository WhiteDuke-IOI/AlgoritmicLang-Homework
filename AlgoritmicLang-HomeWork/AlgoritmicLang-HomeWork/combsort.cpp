#include "combsort.h"

vector <int> combsort(vector <int> vec) {
	auto clock_start = chrono::high_resolution_clock::now();

		const double factor = 1.247; // Фактор уменьшения
		double step = vec.size() - 1;

		while (step >= 1) {
			for (int i = 0; i + step < vec.size(); ++i) {
				if (vec[i] > vec[i + step]) {
					swap(vec[i], vec[i + step]);
				}
			}
			step /= factor;
		}

	auto clock_stop = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(clock_stop - clock_start);
	cout << duration.count();
	return vec;
}