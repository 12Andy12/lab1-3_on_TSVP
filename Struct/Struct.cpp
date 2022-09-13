#include <iostream>
#include <time.h>
//#include <math.h>
#include "Header.h"
using namespace std;



int randomize(vector<int>& mass)
{
    srand(time(0));
    int mass_size = rand() % 30 + 10;
    for (int i = 0; i < mass_size;++i)
        mass.push_back(rand() % 100);
    return mass_size;
}

ostream& operator<<(ostream& out, vector<int> v)
{
    for (auto i : v)
        out << i << " ";
    out << "\n";
    return out;
}

int main()
{
    cout << "\n\n";

    // BubbleSort
    trud trud_BubbleSort;
    int SizeBubbleSort;
    vector<int> vBubble;
    SizeBubbleSort = randomize(vBubble);
    cout << "Bubble Sort: \nOriginal:\n";
    cout << vBubble;
    trud_BubbleSort = BubbleSort(vBubble);
    cout << "\nSorted:\n";
    cout << vBubble << "Size: " << SizeBubbleSort << "\nCompare: "
        << trud_BubbleSort.compare << "\nOperation: " 
        << trud_BubbleSort.operations << "\nSum: " 
        << trud_BubbleSort.operations + trud_BubbleSort.compare;

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";


    // SelectSort
    trud trud_SelectSort;
    int SizeSelectSort;
    vector<int> vSelect;
    SizeSelectSort = randomize(vSelect); 
    cout << "\nSelect Sort: \nOriginal:\n";
    cout << vSelect;
    trud_SelectSort = SelectSort(vSelect);
    cout << "\nSorted:\n";
    cout << vSelect << "\nSize:" << SizeSelectSort << "\nCompare: "
        << trud_SelectSort.compare << "\nOperation: " 
        << trud_SelectSort.operations << "\nSum: " 
        << trud_SelectSort.operations + trud_SelectSort.compare;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";


    // MergeSort
    trud trud_MergeSort;
    int SizeMergeSort;
    vector<int> vMerge;
    SizeMergeSort = randomize(vMerge);
    cout << "\nMerge Sort: \nOriginal:\n";
    cout << vMerge;
    trud_MergeSort = MergeSort(vMerge);
    cout << "\nSorted:\n";
    cout << vMerge << "\nSize:" << SizeMergeSort << "\nCompare: "
        << trud_MergeSort.compare << "\nOperation: "
        << trud_MergeSort.operations << "\nSum: "
        << trud_MergeSort.operations + trud_MergeSort.compare;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
