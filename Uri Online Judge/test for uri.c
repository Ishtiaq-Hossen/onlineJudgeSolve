#include<stdio.h>

int main()
{
    int N, x, y, i, j, sum=0;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        scanf("%d %d",&x,&y);
        for(j=1,sum=0; j<=2*y; j++,x++)
        {
            if(x%2!=0)
            {
                sum+=x;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
