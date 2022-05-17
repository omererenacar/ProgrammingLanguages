#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[] = {"veli"},*strp;
    int s = 0;
    strp = str;

    while (*strp != '\0')
    {
        strp++;
        s++;
    }
    printf("%d ",++s);

    return 0;
}
