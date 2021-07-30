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

int main()
{
    int a[] = {1, 2, 3, 4, 5, 34, 56, 78};
    merge(a, 0, 5, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}