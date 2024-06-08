#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arabic(char[]);





void main(){

    char first[50];
    char second[50];



    int j=0;  //value location
    int ans;

    char valuechar[]={ 'M','D','C','L','X','V','I'};
    while( scanf("%s",first) != NULL){
        //printf("%c",first[0]);
        if(first[0] == '#'){
            break;
        }
        scanf("%s",second);
        ans=abs(arabic(first)-arabic(second));
        //printf("%d",ans);
        if(ans == 0){
            printf("ZERO\n");
        }else{
            j=0;
            for (int i=1000;i>0;i=i/10){
                if(ans >= i){
                    //printf("%d",ans/i);
                    switch((int)(ans/i)){
                        case 1:
                            printf("%c",valuechar[j]);
                            break;
                        case 2:
                            printf("%c",valuechar[j]);
                            printf("%c",valuechar[j]);
                            break;
                        case 3:
                            printf("%c",valuechar[j]);
                            printf("%c",valuechar[j]);
                            printf("%c",valuechar[j]);
                            break;
                        case 4:
                            printf("%c",valuechar[j]);
                            printf("%c",valuechar[j-1]);
                            break;
                        case 5:
                            printf("%c",valuechar[j-1]);
                            break;
                        case 6:
                            printf("%c",valuechar[j-1]);
                            printf("%c",valuechar[j]);
                            break;
                        case 7:
                            printf("%c",valuechar[j-1]);
                            printf("%c",valuechar[j]);
                            printf("%c",valuechar[j]);
                            break;
                        case 8:
                            printf("%c",valuechar[j-1]);
                            printf("%c",valuechar[j]);
                            printf("%c",valuechar[j]);
                            printf("%c",valuechar[j]);
                            break;
                        default:
                            printf("%c",valuechar[j]);
                            printf("%c",valuechar[j-2]);
                            break;
                    }
                }
                j=j+2;
                ans=ans-(int)(ans/i)*i;
            }
            printf("\n");
        }
        //scanf("%s%s",first,second);
    }



}


int arabic(char a[]){

    char valuechar[]={ 'M','D','C','L','X','V','I'};
    int  valueint []={1000,500,100,50 ,10 , 5 , 1 };



    int x=0;
    int i=0;
    int j=0;    //value location
    while( i < strlen(a)){
        while(a[i] == valuechar[j]){
            if(j >= 2){
                if(a[i+1] == valuechar[j-1]){
                    x=x-valueint[j]+valueint[j-1];
                    j=j-1;
                    i=i+2;
                }else if(a[i+1] == valuechar[j-2]){
                    x=x-valueint[j]+valueint[j-2];
                    j=j;
                    i=i+2;
                }else{
                    x = x+valueint[j];
                    i++;
                }
            }else{
                x = x+valueint[j];
                    i++;
            }

        }
        j++;
    }


    return x;
}

