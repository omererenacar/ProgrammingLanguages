#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char ad[] = "Eren", soyad[] = "Acar";
    char *ptr;
    int i,j;
    ptr = (char*)malloc(12 * sizeof(char));
    for (i = 0; i < 5; i++)
    {
        strcpy((ptr+i),&ad[i]);
    }
    *(ptr+i) = ' ';
    i++;
    for ( j = 0; j < 6; i++, j++)
    {
        strcpy((ptr+i),&soyad[j]);
    }
    
    printf("%s",(ptr));    

    return 0;
}
