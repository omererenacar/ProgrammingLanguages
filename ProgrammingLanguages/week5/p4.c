#include <stdio.h>

int main(){
    double d = 7, *dp;
    dp = &d;
    int i = 7, *ip;
    ip = &i;
    float f = 7.0, *fp;
    fp = &f;
    char c = 'a', *cp;
    cp = &c;

    printf("double %d ",sizeof(d));
    printf("%d \n",sizeof(dp)); 
    printf("int %d ",sizeof(i));
    printf("%d \n",sizeof(ip));
    printf("float %d ",sizeof(f));
    printf("%d \n",sizeof(fp));
    printf("char %d ",sizeof(c));
    printf("%d \n",sizeof(cp));
}
