#include <stdio.h>

void degis(int *p1,int *p2);

int main(){
    int a=5,b=4,*ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("ptr1 = %d ptr2 = %d\n",*ptr1,*ptr2);
    degis(ptr1,ptr2);
    printf("ptr1 = %d ptr2 = %d\n",*ptr1,*ptr2);
}

void degis(int *p1,int *p2){
    int gecici;
    gecici = *p1;
    *p1 = *p2;
    *p2 = gecici;
}
