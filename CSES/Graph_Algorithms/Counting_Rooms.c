#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool map[1004][1004] = {0};
int m,n;

void print(){
  for(int i=0;i<m+2;i++){
      for(int j=0;j<n+2;j++){
        printf("%d",map[i][j]);
      }
      printf("\n");
    }
}

bool overflow(int x,int y){
  if(x < 0  || y < 0)    return false;
  if(x > m-1 || y > n-1) return false;
  return true ;
}



void fillroom(int x, int y){
  map[x][y] = 0;
  int vecX[4] = {0,0,1,-1};
  int vecY[4] = {1,-1,0,0};
  int newX,newY;
  for(int i=0;i<4;i++){
    newX = x + vecX[i];
    newY = y + vecY[i];
      if(map[newX][newY]){
        map[newX][newY] = 0;
        // print();
        // printf("\n");
        fillroom(newX,newY);
      }
    
  } 

}

int main(){

    scanf("%d%d",&m,&n);
    char input[2] = "#";
    fgets(input,2,stdin);
    for(int i=1;i<=m;i++){
      for(int j=1;j<=n;j++){
        fgets(input,2,stdin);
        if(input[0] == '#') map[i][j] = 0;
        else map[i][j] = 1;
      }
      fgets(input,2,stdin);
    }

    //print();


    int ans = 0;
    for(int i=1;i<=m;i++){
      for(int j=1;j<=n;j++){
        if(map[i][j]){
          fillroom(i,j);
          ans ++;
        }
      }
    } 

    printf("%d",ans);                                                                   

    return 0;
}