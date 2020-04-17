#include "DIPLOMANT.h"
#include <iostream>

#define MAX 3

int main()
{
    DIPLOMANT diplomant[MAX];
    for (int i = 0; i < MAX; i++)
    {
        diplomant[i] = DIPLOMANT();
        cin >> diplomant[i];
    }
    int f;
    cout << "Count: ";
    cin >> f;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX - i - 1; j++)
        {
            if (diplomant[j]  diplomant[j + 1])
            {
                swap(diplomant[j], diplomant[j + 1]);
            }
        }
    }

}

