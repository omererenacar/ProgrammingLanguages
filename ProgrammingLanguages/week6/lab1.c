#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*ptr,max = 0;
    printf("Terim sayisini girin\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));
	int i;
    for (i = 0; i < n; i++)
    {
        printf("Deger girin\n");
        scanf("%d",&*(ptr+i));
    }

    for ( i = 0; i < n; i++)
    {
        if (max < *(ptr+i))
        {
            max = *(ptr+i);
        }
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    printf("En yuksek sayi = %d\n",max);

    return 0;
}
