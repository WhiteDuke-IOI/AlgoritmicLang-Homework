#include <iostream>
#include <vector>
#include "shakersort.h"
#include "heapsort.h"
#include "combsort.h"
#include "gnomesort.h"
#include "bucketsort.h"
#include "smoothSort.h"

using namespace std;

int main() {
	const int count = 100;
	const int lower = 0;
	const int upper = 1000;

	vector <int> vec0;
	for (int i = 0; i < count; i++) {
		vec0.push_back((rand() % (upper - lower + 1)) + lower);
	}

	vector <int> vec1, vec2, vec3, vec4, vec5, vec6;

	for (int q : vec0) { cout << q << " "; }
	cout << endl << endl;

	cout << "gnomesort: ";
	vec1 = gnomesort(vec0);
	cout << " - ";
	for (int q : vec1) { cout << q << " "; }
	cout << endl << endl;

	cout << "combsort: ";
	vec2 = combsort(vec0);
	cout << " - ";
	for (int q : vec2) { cout << q << " "; }
	cout << endl << endl;

	cout << "heapsort: ";
	vec3 = heapsort(vec0);
	cout << " - ";
	for (int q : vec3) { cout << q << " "; }
	cout << endl << endl;

	cout << "shakersort: ";
	vec4 = shakersort(vec0);
	cout << " - ";
	for (int q : vec4) { cout << q << " "; }
	cout << endl << endl;

	cout << "bucketsort: ";
	vec5 = bucketsort(vec0);
	cout << " - ";
	for (int q : vec5) { cout << q << " "; }
	cout << endl << endl;

	cout << "smoothsort: ";
	vec6 = smoothSort(vec0);
	cout << " - ";
	for (int q : vec6) { cout << q << " "; }
	cout << endl << endl;
}