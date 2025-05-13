#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int A[n]={43,31,26,29,12};
    for(int i=1;i<n;i++)
    {
        int temp=A[i];
        int j=i-1;

        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
