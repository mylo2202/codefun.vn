#include <stdio.h>

int main()
{
    int k, n, i, c, p1, p2, p3, p=1;
    scanf("%d%d", &k, &n);
    if(n>=k && n>=0 && k>=0)
    {
        if(n>0)
            {
                for(i=1; i<=n; i+=1)
                    p=p*i;
                p1=p;
            }
        else
            if(n==0)
                p1=p;
        p=1;
        if(k>0)
            {
                for(i=1; i<=k; i+=1)
                    p=p*i;
                p2=p;
            }
        else
            if(k==0)
                p2=p;
        p=1;
        if((n-k)>0)
            {
                for(i=1; i<=(n-k); i+=1)
                    p=p*i;
                p3=p;
            }
        else
            if((n-k)==0)
                p3=p;
        c=p1/(p2*p3);
        printf("%d\n", c);
    }
}
