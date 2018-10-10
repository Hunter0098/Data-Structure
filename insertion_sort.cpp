#include<iostream>
using namespace std;

int main()
{
    int arra[10]={8,9,0,7,6,5,4,3,2,1};
    int i,j,t=0;
    for(i=1;i<10;i++)
    {
        j=i-1;
        t=arra[i];
        while(j>-1)
        {
            if(arra[j]>t)
            {
                arra[j+1]=arra[j];
                j--;
            }
        }
        arra[j+1]=t;

    }
    return 0;
}
