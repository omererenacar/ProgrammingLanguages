#include <stdio.h>
int topla(int b){
int sum;

if(b>0){



return b%10+ topla(b/10);
}
else
{

return 0;    
}


}


int main(){

int sayi;

printf("Basamaklari toplamini merak ettiginiz sayiyi yaziniz:");
scanf("%d",&sayi);


printf("%d",topla(sayi));


return 0;    
}
