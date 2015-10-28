#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
const int N=100;
int a[N];

void output(int *a, int n)
{
    for (int i=1; i<=n; i++) printf("%c",'a'+a[i]-1);
    printf("\n");
}

bool next(int *a, int n)
{
    int k=n;
    while (k>1 && a[k-1]>a[k]) k--;
    if (k==1) return false;
    int h=n;
    while (a[h]<a[k-1]) h--;
    swap(a[k-1],a[h]);
    for (int i=k, j=n; i<j; i++, j--) swap(a[i],a[j]);
    return true;
}

int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) a[i]=i;
    do
    {
        output(a, n);
    }while (next(a, n));
    return 0;
}