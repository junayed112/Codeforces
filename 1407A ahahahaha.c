#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);

  while(t--)
  {
    long long n,i;
    scanf("%lld",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    long long c1=0,z=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            c1++;
        else
            z++;
    }
    long long k=n/2;
    int start;
    if(z<n/2)
    {
        start=1;
        if(n%4)
            k=n/2 +1;

    }
    else
    {
        start=0;
        k=n/2;
    }

    printf("%lld\n",k);
     for(i=0;i<k;i++)
        printf("%d ",start);
      printf("\n");

  }
}
