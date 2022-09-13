#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class trud {
public:
	int compare;
	int operations;
	trud(int a, int b) : compare(a), operations(b){}
	trud(){}
	trud(trud &a) : compare(a.compare), operations(a.operations) {}
};

int randomize(vector<int>& mass);
ostream& operator<<(ostream& out, vector<int> v);

trud BubbleSort(vector<int>& mass);
trud SelectSort(vector<int>& mass);
trud MergeSort(vector<int>& mass);