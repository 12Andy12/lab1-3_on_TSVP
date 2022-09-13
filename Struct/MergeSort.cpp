#include "Header.h"

//using namespace std;

trud MergeSort(vector<int>& mass)
{
    int compare = 0;
    int operations = 0;

    int Step = 1;     
    vector<int> tmp;

    while (Step < mass.size()) 
    {
        tmp.clear();

        int leftID = 0;                    
        int middleID = leftID + Step;      
        int rightID = leftID + Step * 2;   

        while (leftID < mass.size())
        {
            
            if (middleID >= mass.size())
                middleID = mass.size();
            if (rightID >= mass.size())
                rightID = mass.size();

            int thisLeftID = leftID,
                thisRightID = middleID;

            // Заполняем результирующий массив, пока левый элемент не дошёл до середины и правый не дошёл до конца
            while (thisLeftID < middleID && thisRightID < rightID)
            {
                if (mass[thisLeftID] < mass[thisRightID])
                    tmp.push_back(mass[thisLeftID++]);
                else
                    tmp.push_back(mass[thisRightID++]);
                compare++;
                operations++;
            }

            while (thisLeftID < middleID) 
            {
                tmp.push_back(mass[thisLeftID]);
                thisLeftID++;
                operations++;
            }

            while (thisRightID < rightID) 
            {
                tmp.push_back(mass[thisRightID]);
                thisRightID++;
                operations++;
            }

            // Пеhемещение на следующий сортируемый участок
            leftID += Step * 2;
            middleID += Step * 2;
            rightID += Step * 2;

        } 

        mass = tmp;
        int triger = 0;
        cout << "Step = " << Step * 2<<"\n";
        for (const auto& num : mass)
        {
            cout << num << " ";
            ++triger;
            if (triger == Step * 2)
            {
                cout << "| ";
                triger = 0;
            }
        }
        cout << "\n\n";
        Step *= 2; // Шаг разбиения х2
    }

	trud a(compare, operations);
	//return trud(compare, operations);
	return a;
}