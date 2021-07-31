#include <bits/stdc++.h>
using namespace std;

int Hash(int key)
{
    return key % 10;
}

int primeHash(int key)
{
    return 7 - (key % 7);
}

int doubleHash(int H[], int key)
{
    int index = Hash(key);
    int i = 0;
    while (H[(index + i * primeHash(index)) % 10] != 0)
    {
        i++;
    }
    return (index + i * primeHash(key)) % 10;
}

void insert(int H[], int key)
{
    int index = Hash(key);
    int i = 0;
    if (H[index] != 0)
    {
        index = doubleHash(H, key);
    }
    H[index] = key;
}

int Search(int H[], int key)
{
    int index = Hash(key);
    int i = 0;
    while (H[(index + i * primeHash(key)) % 10] != key)
    {
        i++;
        if (H[(index + i * primeHash(key)) % 10] == 0)
        {
            return -1;
        }
        return (index + i * primeHash(key)) % 10;
    }
}
int main()
{
    int H[10] = {0};
    cout << "How many elements do u wanna enter?";
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        insert(H, y);
    }
    cout << "What do you wanna check?";
    int z;
    cin >> z;
    cout << Search(H, z);
    return 0;
}