#include<iostream>
using namespace std;

int main()
{
    int Arr[8] = {5,3,1,9,7,1,9,0};
    int flag=0;
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<i+3;j++)
        {
            if(Arr[i]==Arr[j])
            {
                flag=1;
            }
        }
    }
    cout << flag; 
}