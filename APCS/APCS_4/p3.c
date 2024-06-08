#include <stdio.h>
#define ll long long

char food[200001];
int happy[3];
int last[3];                                                                                                                                            
ll control[200001] = {0};

int main(){
    int n;
    ll m;
    scanf("%d%lld",&n,&m); 
    scanf("%s",food);
    scanf("%d%d%d",&happy[0],&happy[1],&happy[2]);
    scanf("%d%d%d",&last[0],&last[1],&last[2]);
    int index;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(food[i] == 'W') index = 0;
        if(food[i] == 'M') index = 1;
        if(food[i] == 'L') index = 2;
        for(int j=i;j<i+last[index];j++){
            control[j] += happy[index];
        }
        if(control[i] > m) ans ++;
    }

    printf("%lld",ans);
    
    return 0;
}