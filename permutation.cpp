#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
const int N=100;
int a[N];

void form_permutation(int k,int n) //共n个元素，当前位置为第k个
{
    if (k>n) //输出全排列结果
    {
        for (int i=1; i<=n; i++)
			printf("%c",'a'+a[i]-1);
        printf("\n");
        return;
    }
    else
    {
        for (int i=k; i<=n; i++) //枚举当前位放置的元素
        {
            swap(a[k],a[i]);
            form_permutation(k+1,n); //递归排列后n-k个元素
            swap(a[k],a[i]);
        }
    }
}

int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) a[i]=i;
    form_permutation(1,n);
    return 0;
}
