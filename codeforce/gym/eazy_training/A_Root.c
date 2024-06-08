#include <stdio.h>

int main(){

    char column[8]={'a','b','c','d','e','f','g','h'};
    int row[8]={1,2,3,4,5,6,7,8};

    int n;
    scanf("%d",&n);

    int i,j;
    char input[3];
    for(i=0;i<n;i++){
        scanf("%s",input);

        for(j=0;j<8;j++){
            if(j != (int)(input[1]-'0'-1)){
                printf("%c%d\n",column[(int)(input[0]-97)],row[j]);
            }
            if(j != (int)(input[0]-97)){
                printf("%c%d\n",column[j],row[(int)(input[1]-'0'-1)]);
            }

        }
    }

    return 0;
}
