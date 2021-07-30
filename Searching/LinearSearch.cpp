#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int a[] = {2, 5, 8, 9, 10, 23};
    cout << linearSearch(a, sizeof(a) / sizeof(a[0]), 8);

    return 0;
}