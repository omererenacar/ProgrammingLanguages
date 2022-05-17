#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*ptr,max = 0,i,k;
    printf("Terim sayini giriniz\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Deger giriniz\n");
        scanf("%d",&*(ptr+i));
    }
    
    for  (k = 0; k < n; k++)
    {
        printf("adresi = %d\t deger %d \n",(ptr+k),*(ptr+k));
    }

    printf("Yeni terim sayisini giriniz\n");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr, n);

    while (i < n)
    {
        printf("Deger giriniz\n");
        scanf("%d",&*(ptr+i));
        i++;
    }
    for (k = 0; k < n; k++)
    {
        printf("adresi = %d\t deger = %d \n",(ptr+k),*(ptr+k));
    }
    
    return 0;
}
