#pragma once
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int NextState(int& curState);

void PrevState(int& curState);

void shiftDown(vector<int>& mas, int posHeapItemsAmount, int indexLastTop);

void make_heap_pool(vector<int>& mas);

int findPosMaxElem(vector<int>& mas, int curState, int indexLastTop, int& nextPosHeapItemsAmount);

vector<int> smoothSort(vector<int> mas);