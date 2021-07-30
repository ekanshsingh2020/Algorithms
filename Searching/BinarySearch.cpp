#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int l,int h,int key)
{
    if(a[l]==key)
    return l;
    if(a[l]>key)
    return binarySearch(a,l,(l+h)/2,key);
    return binarySearch(a,(l+h)/2,h,key);
}

int main()
{
    int a[]={2,4,7,9,10,23,45};
    cout<<binarySearch(a,0,6,23);
    return 0;
}