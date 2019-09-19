#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    if(n==2)
    {
        printf("YES");
    }
    else
    {
        for(i=2; i<=n-1; i++)
        {
            if(n%i==0)
            {
                printf("%d", i);    //chạy vòng lặp từ 2 đến n-1, nếu chia hết số nào đó thì đó là ước nhỏ nhất, ước này chắc chắn là nguyên tố
                break;
            }
            else
                continue;
            if(i==n-1 && n%i!=0)
            {
                printf("YES");
                break;
            }
        }
    }
}
