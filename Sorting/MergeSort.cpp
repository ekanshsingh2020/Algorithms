#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int b[h + 1];
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    for (; i <= mid; i++)
    {
        b[k++] = a[i];
    }
    for (; j <= h; j++)
    {
        b[k++] = a[j];
    }
    for (int p = l; p < (h + 1); p++)
    {
        a[p] = b[p];
    }
}

void mergesort(int a[], int n)
{
    int p, i, l, mid, h;
    for (p = 2; p <= n; p = p * 2)
    {
        for (i = 0; i + p - 1 < n; i=i+p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(a, l, mid, h);
        }
        if (n - i > p / 2)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(a, l, mid, n - 1);
        }
    }
    if (p / 2 < n)
        merge(a, 0, p / 2-1, n - 1);
}

int main()
{
    int a[] = {1, 8, 6, 4, 3, 2, 9};
    mergesort(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}