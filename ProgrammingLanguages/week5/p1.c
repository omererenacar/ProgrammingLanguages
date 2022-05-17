#include <stdio.h>

int main(){
    int a,b,toplam,*ap,*bp;
    a = 10;
    b = 11;
    ap = &a;
    bp = &b;
    toplam = *ap + *bp;
    printf("%d",toplam);
}
