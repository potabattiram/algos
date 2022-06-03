#include <iostream>
using namespace std;

int main()
{
    int Arr[17] = {12, 4, 7, 9, 2, 23, 25, 41, 30,
                   40, 28, 42, 30, 44, 48, 43, 50};
    int minDiff = INT16_MAX;

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (Arr[i] > Arr[j])
            {
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
    for (int i = 0; i+3-1 < 17; i++)
    {
        if (Arr[i + 3 - 1]-Arr[i] < minDiff)
        {
            minDiff = Arr[i + 3 - 1]-Arr[i];
        }
    }
    cout << minDiff;
}