#include<stdio.h>
void main()
{
    int h1,h2,m1,m2,H,M;
    scanf("%d %d",&h1,&m1);
    scanf("%d %d",&h2,&m2);

    if(h1<h2 && m1<m2){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",h2-h1,m2-m1);
    }
    else if(h1<h2 && m1>m2){
        m2=m2+60;
        h1=h1+1;
        M=m1-m2;
        H=h1-h2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",H,M*-1);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
    }
}
