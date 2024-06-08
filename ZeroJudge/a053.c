#include <stdio.h>

int main(){

    int i;
    scanf("%d",&i);

    if(i<11)          printf("%d",i*6);
    else if(i < 21)   printf("%d",60+(i-10)*2);
    else if(i < 40)   printf("%d",80+(i-20)*1);
    else              printf("%d",100);


    return 0;
}
