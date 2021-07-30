#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}

int partition(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if (i<j)
        swap(&a[i],&a[j]);
        
    }while(i<j);
    swap(&a[l],&a[j]);
    return j;
}

void quicksort(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

int main()
{
    int arr[]={30,12,56,5,89,INT32_MAX};
    quicksort(arr,0,5);
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}