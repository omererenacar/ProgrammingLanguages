#include <stdio.h>
int Toplama(int x){


if(x==1){


return 1;


}
else{



return x+Toplama(x-1);
}
}



int main (){
int k;



printf("Bir deger giriniz:");
scanf("%d",&k);





printf("Sonuc=%d\n",Toplama(k));

return 0;
}


