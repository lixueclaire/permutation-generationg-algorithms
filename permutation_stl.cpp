#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
const int N=100;
int a[N];

void form_permutation(int n)
{
    do
    {
        for (int i=1; i<=n; i++) printf("%c",'a'+a[i]-1);
        printf("\n");
    }while(next_permutation(a+1,a+n+1));
}

int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) a[i]=i;
    form_permutation(n);
    return 0;
}
