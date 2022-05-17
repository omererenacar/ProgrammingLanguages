#include<stdio.h>
#include<conio.h>




int OBEB(int sayi1 , int sayi2){

	if(sayi2==0 ){ 
		return sayi1; 
	}

	else{ 
		return OBEB(sayi2,sayi1%sayi2); 
	}
}




int main (){
	
	int sayi1 , sayi2 , sonuc; 
	
    printf(" ---- Birinci Sayiyi Giriniz: "); 
    scanf("%d", &sayi1); 
   
    printf(" ---- Ikinci Sayiyi Giriniz: "); 
    scanf("%d", &sayi2); 
 
    sonuc = OBEB(sayi1,sayi2); 
   
    printf(" ---- OBEB(%d,%d) = %d", sayi1, sayi2, sonuc); 
    
	
	
	
	
	getch();
	return 0;
}
