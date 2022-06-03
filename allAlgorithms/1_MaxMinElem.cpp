#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {9,2,1,4,2};
    int max=Arr[0],min=Arr[0];

    for(int i=1;i<5;i++)
    {
        if(Arr[i] > max)
        {
            max=Arr[i];
        }
        if(Arr[i] < min)
        {
            min = Arr[i];
        }
    }
    cout << "Max: " << max << endl << "Min: " << min; 
}