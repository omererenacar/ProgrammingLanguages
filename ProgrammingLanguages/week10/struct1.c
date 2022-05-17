#include <stdio.h>
	struct student{
		
	int number;
	char name[20];
	char surname[20];
	int midtermgrade;
	}; 
int main(){
	
	
	int i;
	struct student arr[10];
	for(i=0;i<3;i++){
	
	printf("Ogrenci numarasini giriniz: ");
	scanf("%d",&arr[i].number);
	printf("Ogrencinin adini giriniz: ");
	scanf("%s",arr[i].name);
	printf("Ogrenci soyadini giriniz: ");
	scanf("%s",arr[i].surname);
	printf("Ogrencinin notunu giriniz: ");
	scanf("%d",&arr[i].midtermgrade);
}


return 0;
}
