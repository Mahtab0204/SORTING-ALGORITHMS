#include<bits/stdc++.h>
using namespace std;
void MERGE(int A[],int l,int mid,int r)
{
    int s1=mid-l+1;
    int s2=r-mid;
    int L[s1];
    int M[s2];
    for(int i=0; i<s1; i++)
    {
        L[i]=A[l+i];
    }
    for(int j=0; j<s2; j++)
    {
        M[j]=A[mid+j+1];
    }
    int i=0,j=0,k=l;
    while(i<s1 && j<s2)
    {
        if(L[i]<=M[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=M[j];
            j++;
        }
        k++;
    }
    while(i<s1)
    {
        A[k]=L[i];
        i++;
        k++;
    }
    while(j<s2)
    {
        A[k]=M[j];
        j++;
        k++;
    }
}
void MERGE_SORT(int A[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        MERGE_SORT(A,l,mid);
        MERGE_SORT(A,mid+1,r);

        MERGE(A,l,mid,r);
    }
}
void SORTED_ARRAY(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int n=7;
    int A[n]= {38,27,43,3,9,82,10};
    MERGE_SORT(A,0,n-1);
    SORTED_ARRAY(A,n);
    return 0;
}
