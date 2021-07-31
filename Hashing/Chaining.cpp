#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int Hash(int key)
{
    return key % 10;
}
void SortedInsert(node **H, int x)
{
    node *t, *q = NULL, *p = *H;
    t = new node();
    t->data = x;
    t->next = NULL;
    if (*H == NULL)
        *H = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == *H)
        {
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

node *Search(node*p,int key)
{
    while (p)
    {
        if (key==p->data)
        {
            return p;
        }
        p=p->next;
    }
    return NULL;
}

void insert(node **H, int key)
{
    int index = Hash(key);
    SortedInsert(&H[index], key);
}
int main()
{
    node*HT[10];
    node*temp;
    for (int i = 0; i <10; i++)
    {
        HT[i]=NULL;
    }
    int n;
    cout<<"How many elements u wanna enter?";
    cin>>n;
    for (int j = 0; j <n; j++)
    {
        int x;cin>>x;
        insert(HT,x);
    }
    cout<<"What element do you wanna check for";
    int y;cin>>y;
    if(Search(HT[Hash(y)],y))
    cout<<"Yes found"<<endl;
    else
    cout<<"Not found"<<endl;
    
    
    return 0;
}