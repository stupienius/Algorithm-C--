#include <stdio.h>
#include <stdlib.h>

int main(){

    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    int y,m,d;
    int yy,mm,dd;


    int ans,stop,i;
    while( scanf("%d %d %d",&y,&m,&d) != EOF){
        scanf("%d %d %d",&yy,&mm,&dd);

        ans=0;

        if(y ==yy){
            if(m == mm){
                if(d == dd){
                    printf("0\n");
                }else{
                    printf("%d\n",abs(d-dd));
                }
            }else{
                if(d == dd){
                    stop = (m>mm)?m:mm;
                    for(i=(m>mm)?mm:m;i<stop;i++){
                        printf("%d %d\n",i,stop);
                        ans += month[i];
                    }
                    printf("%d\n",ans);
                }else{

                    stop = (m>mm)?m:mm;
                    for(i=(m>mm)?mm:m;i<stop;i++){
                        printf("%d %d\n",i,stop);
                        ans += month[i];
                    }
                    printf("%d\n",ans);
                }
            }

        }else{

        }
    }

    return 0;
}
