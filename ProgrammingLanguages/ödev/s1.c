#include <stdio.h>
#include <stdlib.h>
typedef struct dugum{
	int x;
	struct dugum * gosterici; 
}dugum;
dugum *bas= NULL;
dugum *son= NULL;
dugum *gecici= NULL;
void basaEkle(int sayi){
	dugum * eklenecek;
	eklenecek=(dugum *) malloc(sizeof(dugum));
	eklenecek->x=sayi;
	eklenecek->gosterici= bas;
	bas = eklenecek;
}
void sonaEkle(int sayi){
	dugum * eklenecek;
	eklenecek=(dugum *) malloc(sizeof(dugum));
	eklenecek->x=sayi;
	eklenecek->gosterici=NULL;	
}
void yazdir(){
	gecici=bas;
	while(gecici->gosterici != NULL){
		printf("%d",gecici->x);
		gecici=gecici->gosterici;
	}	
}
int main(){
	int a;
	while(a != -1){
		printf("Bir sayi giriniz: ");
		scanf("%d",&a);
		if(a%2==0){
			sonaEkle(a);
		}
		else{
			basaEkle(a);
		}
	}
yazdir();	
}
