#include <bits/stdc++.h>
using namespace std;

void bubblesort(int a[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    int a[] = {1, 5, 7, 9, 3, 10, 20};
    bubblesort(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}