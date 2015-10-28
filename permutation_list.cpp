#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
struct Node
{
    int val;
    Node *next;
    Node (int v) {val=v; next=NULL;}
};
Node *head=NULL;

void form_permutation(int k, int n)
{
    if (k>n)
    {
        Node *now=head;
        while (now!=NULL)
        {
           // printf("%c",now->val-1+'a');
			printf("%d",now->val);
            now=now->next;
        }
        printf("\n");
        return;
    }
    else
    {
        Node *node=new Node(k);
        Node *pre_head=head;
        node->next=head;
        head=node;
        form_permutation(k+1,n);
        head=pre_head;
        Node *now=head;
        while (now!=NULL)
        {
            Node *next=now->next;
            now->next=node;
            node->next=next;
            form_permutation(k+1,n);
            now->next=next;
            now=now->next;
        }
    }
}

int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    int n;
    scanf("%d",&n);
    form_permutation(1,n);
    return 0;
}