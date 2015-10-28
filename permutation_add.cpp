#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
const int N=100;
int a[N], b[N];

void output(int *a, int *b, int n)
{
    for (int i=1; i<=n; i++) a[i]=0;
    for (int i=n; i>=1; i--)
    {
        int cnt=0;
        for (int j=n; j>=1; j--)
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

bool next(int *b, int n)
{
    int i;
    for (i=1; i<=n; i++)
        if (b[i]!=i-1) break;
    if (i>n) return false;
    int k=2;
    b[k]++;
    while (b[k]>=k) {b[k+1]++; b[k]%=k; k++;}
    return true;
}

int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) b[i]=0;
   do
    {
        output(a, b, n);
    }while (next(b, n));
    return 0;
}