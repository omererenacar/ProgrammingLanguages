#include <stdio.h>

int main(){
    char str[] = {"omer"},revStr[6],*strp,j=0;
    strp = str;
	int i;
    for ( i = 4; i >= 0; i--)
    {
        revStr[j] = *(strp + i);
        j++; 
    }
    revStr[j] = '\0';
    puts(revStr);
}
