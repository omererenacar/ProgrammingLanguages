#include <stdio.h>

int fonk(int a[],int b){
	
	if(b-1 == 0){
		if(a[b-1] % 2 == 0) return 0;
		else return 1;
	}
	
	if(a[b-1]%2==0){
		
		return 0+fonk(a,b-1);
	
	}
	else{
	
		return 1+fonk(a,b-1);	
	}	
	
}

int main(){
	
	
	
	int dizi[]={0,2,6,4,5};
		

	printf("%d",fonk(dizi,5));
	return 0;	
}
