#include<stdio.h>
int main()
{
    int i,n;
    double a,b,c,med;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        med=((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);
        printf("%.1lf\n",med);
    }

    return 0;
}
