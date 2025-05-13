#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int A[n]={9,13,15,11,2};
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(A[i],A[min]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
