#include<iostream>
using namespace std;

// KADANE's Algo
int main()
{
    int Arr[8] = {-2,-3,4,-1,-2,1,5,-3};

    int maxLeast = -10, maxEnds = 0;

    for(int i=0;i<8;i++)
    {
        maxEnds+=Arr[i];
        if(maxLeast < maxEnds)
        {
            maxLeast = maxEnds;
        }
        if(maxEnds < 0)
        {
            maxEnds = 0;
        }
        cout << maxLeast << "  " << maxEnds << endl;
    }
    // cout << maxLeast;
    

}