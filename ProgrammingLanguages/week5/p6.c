#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5}, toplam = 0, *arrp;
    arrp = arr;
    int i;
	for (i = 0; i < 5; i++)
    {
        toplam+= *(arrp+i);
    }
    printf("%d ",toplam);
}
