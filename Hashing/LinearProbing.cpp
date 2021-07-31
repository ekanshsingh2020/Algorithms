#include <bits/stdc++.h>
using namespace std;

int Hash(int key)
{
    return key % 10;
}

int probe(int H[], int key)
{
    int index = Hash(key);
    int i = 0;
    while (H[index + i] % 10 != 0)
    {
        i++;
    }
    return (index + i) % 10;
}

void insert(int H[],int key)
{
    int index = Hash(key);
    if (H[index]!=0)
    {
        index=probe(H,key);
    }
    H[index]=key;


}

int Search(int H[],int key)
{
    int index = Hash(key);
    int i=0;
    while (H[(index+i)%10]!=key)
    {
        if (H[(index+i)%10]==0)
        {
            return -1;
        }
        i++;
        
    }
    return (index+i)%10;
    
}

int main()
{
    int H[10]={0};
    cout<<"How many elements do u wanna enter?";
    int x;cin>>x;
    for (int i = 0; i <x; i++)
    {
        int y;cin>>y;
        insert(H,y);
    }
    cout<<"What do you wanna check?";
    int z;
    cin>>z;
    cout<<Search(H,z);
    
    return 0;
}