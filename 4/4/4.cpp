#include "DIPLOMANT.h"
#include <iostream>

using namespace std;
#define MAX 3

void Sort(DIPLOMANT* mas);

int main()
{
    DIPLOMANT diplomant[MAX];
    for (int i = 0; i < MAX; i++)
    {
        diplomant[i] = DIPLOMANT();
        cin >> diplomant[i];
    }
    Sort(diplomant);
    cout << "Sorted values:\n";
    for (int i = 0; i < MAX; i++)
    {
        cout << "On " << diplomant[i].Get_Place() << " gets " << diplomant[i].Get_Stud_Grade() << "\n";
    }
}

void Sort(DIPLOMANT* mas) {
    for (int i = 0; i < MAX; i++) {
        int min = i;
        for (int j = i + 1; j < MAX; ++j)
        {
            if (mas[j].Get_Stud_Grade() < mas[min].Get_Stud_Grade())
                min = j;
        }
        std::swap(mas[i], mas[min]);
    }
}