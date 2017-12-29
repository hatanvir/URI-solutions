#include<stdio.h>
#include<string.h>
int main()
{
    char first[10],second[10],third[10];

    scanf("%s",first);
    if(0==strcmp("vertebrado",first)){
            scanf("%s",second);
    if(0==strcmp("ave",second)){
        scanf("%s",third);
    if(0==strcmp("carnivoro",third)){
        printf("aguia\n");
    }
    else if("onivoro",third){
        printf("pomba\n");
    }
    }
    if(0==strcmp("mamifero",second)){
        scanf("%s",third);
        if(0==strcmp("onivoro",third)){
            printf("homem\n");
        }
        else if(0==strcmp("herbivoro",third)){
            printf("vaca\n");
        }
    }
    }

    if(0==strcmp("invertebrado",first)){
            scanf("%s",second);
    if(0==strcmp("inseto",second)){
        scanf("%s",third);
    if(0==strcmp("hematofago",third)){
        printf("pulga\n");
    }
    else if("herbivoro",third){
        printf("lagarta\n");
    }
    }
    else if(0==strcmp("anelideo",second)){
        scanf("%s",third);
        if(0==strcmp("hematofago",third)){
            printf("sanguessuga\n");
        }
        else if(0==strcmp("onivoro",third)){
            printf("minhoca\n");
        }
    }
    }
    return 0;


}
