#include <bits/stdc++.h>
using namespace std;
//Very fast but takes a lot of space
int findMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void countsort(int a[], int n)
{
    int max, i, *c, j = 0;
    max = findMax(a, n);
    c = new int[max + 1];
    for (i = 0; i <= max; i++)
    {
        c[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        c[a[i]]++;
    }
    i = 0;
    while (i < max + 1)
    {
        if (c[i] > 0)
        {
            a[j++] = i;
            c[i]--;
        }
        else
            i++;
    }
}

int main()
{
    int a[] = {5, 6, 2, 3, 4, 9, 12};
    countsort(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}