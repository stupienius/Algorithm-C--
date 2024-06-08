#include <stdio.h>
#include <string.h>

// A -> 65


void main(){

    char fuc[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int  fi [26]={ 10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    char id[100];
    int  x[100];
    int sum=0;

    scanf("%s",id);
    int i=0;
    while(fuc[i] != id[0]){
        i++;
    }
    x[0]=fi[i];

    for(i=1;i<10;i++){
        x[i]=(int)(id[i]-'0');
        //printf("%d  ",x[i]);
    }
    //printf("%d",x[0]);
    //  個位  x[0]-(int)(x[0]/10)*10
    //  十位  (int)(x[0]/10)
    //printf("\n");

    sum=(int)(x[0]/10)+(x[0]-(int)(x[0]/10)*10)*9;
    //printf("%d",sum);
    for(i=8;i>0;i--){
        sum=sum+x[9-i]*i;
    }
    sum=sum+x[9];
    if(strlen(id) > 10){
        printf("fake");
    }else{
        (sum%10 == 0) ? printf("real") : printf("fake") ;
    }


}
