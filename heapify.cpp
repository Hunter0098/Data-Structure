#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
  int largest,l,r;
  largest=i;
  l=2*i+1;
  r=2*i+2;
  if(l<n&&arr[largest]<arr[l])
   largest=l;
  if(r<n&&arr[largest]<arr[r])
      largest=r;
  if(largest!=i)
  {
    swap(arr[i],arr[largest]);
    heapify(arr,n,largest);
  }

}
