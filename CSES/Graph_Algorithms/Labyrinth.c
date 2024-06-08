#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool map[1002][1002] = {0};

int ans = 1000;
int m,n;
int startX,startY,endX,endY;
char path[1000];

int vecX[4] = {0,0,1,-1};
int vecY[4] = {1,-1,0,0};
char direction[4][2] = {"R","L","D","U"};

void print(){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
}

void find_path(int x,int y,int step,char p[]){
    if(!map[x][y]) return ;
    if(step >= ans) return;
    if(x == endX && y == endY){
        ans = step;
        strcpy(path,p);
        return;
    }
    map[x][y] = 0;
    //print();
    //printf("\n");
    for(int i=0;i<4;i++){
        strcat(p,direction[i]);
        find_path(x+vecX[i],y+vecY[i],step+1,p);
        p[step] = '\0';
    }
    map[x][y] = 1;
}


int main(){

    scanf("%d%d",&m,&n);
    char input[2];
    fgets(input,2,stdin);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            fgets(input,2,stdin);
            switch (input[0]){
            case 'A':
                map[i][j] = 1;
                startX = i;
                startY = j;
                break;
            case 'B':
                map[i][j] = 1;
                endX = i;
                endY = j;
                break;
            case '#':
                map[i][j] = 0;
                break;
            default:
                map[i][j] = 1;
            break;
            }
        }
        fgets(input,2,stdin);
    }

    // print();

    // printf("%d %d %d %d",startX,startY,endX,endY);
    char p[] = {'\0'};
    find_path(startX,startY,0,p);

    if(ans == 1000){
        printf("NO");
    }else{
        printf("YES\n");
        printf("%d\n",ans);
        printf("%s",path);
    }

    return 0;
}