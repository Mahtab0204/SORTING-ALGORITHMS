#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,count=0;
    int A[n]= {0,1,1,0};
    bool flag;
    for(int i=0; i<n-1; i++)
    {
        flag=false;
        for(int j=0; j<n-i-1; j++)
        {
            if(A[j+1]<A[j])
            {
                swap(A[j],A[j+1]);
                flag=true;
            }
            cout<<j<<" "<<j+1<<endl;
        }
        if(flag==false)
        {
            break;
        }
    }
    cout<<count<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int A[n]={2,1,4,5,7};
    bool flag;
    for(int i=0;i<n;i++)
    {
        flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                swap(A[i],A[j]);
                flag=true;
            }
            cout<<i<<" "<<j<<endl;
        }
        if(flag==false)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}*/

