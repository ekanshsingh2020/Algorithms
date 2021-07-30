#include<bits/stdc++.h>
using namespace std;
//Merging two sorted lists
void merge(int a[],int b[],int m,int n)
{
    int c[m+n];
    int i=0,j=0,k=0;
    while (i<m && j<n)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    for (; i <m; i++)
    {
        c[k++]=a[i];
    }
    for (; j <n; j++)
    {
        c[k++]=b[j];
    }
    
    for (int p = 0; p< m+n; p++)
    {
        cout<<c[p]<<" ";
    }
    
    
}

int main()
{
    int a[]={1,5,3,7,9,12};
    int b[]={2,56,34,11,9,7};
    merge(a,b,6,6);
    
    
    
    
    return 0;
}