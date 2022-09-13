#include "Header.h"


trud SelectSort(vector<int>& mass)
{
	int compare = 0;
	int operations = 0;
	int max_index;
	for (int i = mass.size() - 1; i >=0; --i)
	{
		max_index = i;
		for (int j = i-1; j >=0; --j)
		{
			++compare;
			if (mass[j] > mass[max_index])
			{
				max_index = j;
				++operations;
			}
		}
		++compare;
		if (max_index != i)
		{
			swap(mass[max_index], mass[i]);
			operations += 3;
		}
	}

	trud a(compare, operations);
	//return trud(compare, operations);
	return a;
}