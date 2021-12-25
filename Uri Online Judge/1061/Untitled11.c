#include<stdio.h>
int main()
{
     int d1,d2,m1,m2,h1,h2,s1,s2,ds1,ds2,day,hr,mi,sec,N;
     char trash;

     scanf("%s%d",&trash,&d1);
     scanf("%d%s%d%s%d",&h1,&trash,&m1,&trash,&s1);
     scanf("%s%d",&trash,&d2);
     scanf("%d%s%d%s%d",&h2,&trash,&m2,&trash,&s2);
     ds1=s1+(m1*60)+(h1*3600)+(d1*(24*3600));
     ds2=s2+(m2*60)+(h2*3600)+(d2*(24*3600));
     N=ds1-ds2;
     day=N/86400;
     N=N%86400;
     hr=N/3600;
     N=N%3600;
     mi=N/60;
     sec=N%60;
     if(day<0){
        day=-1*day;
     }
     if(mi<0){
        mi=-1*mi;
     }
     if(hr<0){
        hr=-1*hr;
     }
     if(sec<0){
        sec=-1*sec;
     }
     printf("%d dia(s)\n",day);
     printf("%d hora(s)\n",hr);
     printf("%d minuto(s)\n",mi);
     printf("%d segundo(s)\n",sec);

    return 0;
}
