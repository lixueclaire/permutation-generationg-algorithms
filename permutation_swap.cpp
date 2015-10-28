#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
const int N=100;
int a[N], b[N], d[N];

void output(int *a, int *b, int *d, int n)
{
    for (int i=1; i<=n; i++) a[i]=0;
    for (int i=n; i>=1; i--)
    {
        int cnt=0;
        for (int j=(d[i]==-1)?n:1; ;j+=d[i])
            if (a[j]==0)
            {
                cnt++;
                if (cnt==b[i]+1)
                {
                    a[j]=i;
                    break;
                }
            }
    }
    for (int i=1; i<=n; i++) printf("%c",'a'+a[i]-1);
    printf("\n");
}

bool next(int *b, int *d, int n)
{
    int i;
    for (i=1; i<=n; i++)
        if (b[i]!=i-1) break;
    if (i>n) return false;
    int k=n;
    b[k]++;
    while (b[k]>=k) {b[k-1]++; b[k]%=k; k--;}
    for (i=k+1; i<=n; i++)
    {
        if (i==2) {d[i]=-1; continue;}
        if (i&1)
        {
            if (b[i-1]&1) d[i]=1; else d[i]=-1;
        }
        else
        {
            if ((b[i-1]+b[i-2])&1) d[i]=1; else d[i]=-1;
        }
    }
    return true;
}

int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) b[i]=0, d[i]=-1;
    do
    {
        output(a, b, d, n);
    }while (next(b, d, n));
    return 0;
}