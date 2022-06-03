#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {4,1,3,5,7};
    int Brr[5];

    for(int i=0;i<5;i++)
    {
        Brr[i] = Arr[5-i-1];
    }

    for(int i=0;i<5;i++)
    {
        cout << Brr[i] << " ";
    }
}
