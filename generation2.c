#include<stdio.h>
int checkgen2(){
    int born = 2542;
    int news = 35;
    if(born >= 2541)
    {
        if(news>=34){
            printf("Generation Z =%d\n",born);
            printf("Share social online =%d",news);
        }
        else if(news >= 29 && news <34){
            printf("Generation Z =%d\n",born);
            printf("News Account =%d",news);
        }
    }
}
