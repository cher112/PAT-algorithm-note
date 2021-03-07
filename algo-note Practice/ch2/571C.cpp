#include <stdio.h>

int main(){
    int b;
    char *a="I love China!\0";
    scanf("%d",&b);
    printf("%s\n",a+b);
}