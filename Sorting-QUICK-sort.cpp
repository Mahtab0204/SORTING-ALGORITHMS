#include<bits/stdc++.h>
using namespace std;
int PARTITION(int A[],int low,int high)
{
    int pivot=A[high];
    int i=low-1;
    for(int j=low; j<high; j++)
    {
        if(A[j]<=pivot)
        {
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[high]);
    return (i+1);
}
void QUICK_SORT(int A[],int low,int high)
{
    if(low<high)
    {
        int pivot=PARTITION(A,low,high);

        QUICK_SORT(A,low,pivot-1);
        QUICK_SORT(A,pivot+1,high);
    }
}
void SORTED_ARRAY(int A[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int n=7;
    int A[n]= {8,3,1,7,0,10,2};
    QUICK_SORT(A,0,n-1);
    SORTED_ARRAY(A,n);

    return 0;
}
