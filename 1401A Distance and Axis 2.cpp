#include<stdio.h>
int main(){int t,i,n,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&k);
        if(n<=k)
        printf("%d\n",k-n);
        else if(n>=k)
        {
            if(n%2!=k%2)
            printf("1\n");
            else
            printf("0\n");
        }
    }
    return 0;
}
