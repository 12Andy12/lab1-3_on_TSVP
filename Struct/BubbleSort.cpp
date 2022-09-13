#include "Header.h"


trud BubbleSort(vector<int> &mass)
{
	int compare = 0;
	int operations = 0;
	for(int i=0;i<mass.size();++i)
		for (int j = 0; j < mass.size() - i - 1; ++j)
		{
			++compare;
			if (mass[j] > mass[j + 1])
			{
				swap(mass[j], mass[j+1]);
				operations += 3;
			}
		}
	trud a(compare, operations);
	//return trud(compare, operations);
	return a;
}