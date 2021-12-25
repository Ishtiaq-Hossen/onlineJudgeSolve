#include<stdio.h>



int main()
{
    int i,j;
    for(i=0;i<39;i++)
    {
        printf("-");
    }
    printf("\n");

    int ck = 0;
    for(j=0;j<11;j++)
    {
        if(j % 2 == 0){
            continue;
        }
        else {

            for (i = 0; i < 39; i++) {
                if (i == 0) printf("|");
                else if (i == 38) printf("|\n");
                else printf(" ");
            }
        }
    }

    for(i=0;i<39;i++)
    {
        printf("-");
    }
    printf("\n");

    return 0;
}
