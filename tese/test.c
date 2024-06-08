#include <stdio.h>
#include <string.h>

int main(){
    
    char a[100] = {'z','f','r','\0'};
    char b[4][2] = {"a","b","c","d"};

    strcat(a,b[0]);


    printf("%s",a);

    return 0;
}