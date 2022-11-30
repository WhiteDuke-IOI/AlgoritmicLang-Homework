#include <iostream>
#include <vector>
#include "shakersort.h"

using namespace std;

int main() {
	vector <int> vec0 = { 4, 87, 73, 50, 75, 93, 77, 60, 92, 100, 16, 56, 91, 77, 7, 64, 26, 17, 56, 33, 6, 52, 45, 38, 18, 18, 30, 92, 41, 22, 59, 47, 14, 87, 42, 10, 45, 61, 80, 25, 66, 52, 47, 36, 70, 32, 54, 72, 16, 100, 24, 52, 29, 45, 37, 54, 53, 12, 11, 60, 69, 68, 65, 6, 98, 66, 37, 27, 18, 71, 75, 40, 26, 26, 36, 86, 58, 82, 12, 51, 8, 25, 37, 80, 9, 72, 59, 92, 52, 98, 52, 36, 69, 71, 34, 21, 12, 52, 13, 8 };
	vector <int> vec1, vec2, vec3, vec4;

	for (int q : vec0) { cout << q << " "; }
	cout << endl << endl;

	vec4 = shakersort(vec0);

	cout << endl << endl;
	for (int q : vec4) { cout << q << " "; }
}