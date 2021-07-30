#include <bits/stdc++.h>
using namespace std;

void selectionsort(int a[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (a[j] < a[k])
                k = j;
        }
        int temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }
}

int main()
{
    int a[] = {1, 5, 7, 9, 3, 10, 20};
    selectionsort(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}