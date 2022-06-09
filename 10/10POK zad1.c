#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){

	char string[]="12345";

	int i,j,dlugosc=0,wynik=0,suma=0;
	
	for(i=0;;i++){
		if(string[i]=='\0')break;
		dlugosc++;
	}
	
	for(i=0;i<dlugosc;i++){
		wynik=string[i]-48;
		for(j=1;j<=i;j++){
			//if(wynik==0)wynik=10;
			wynik=wynik*10;
		}
		suma=suma+wynik;
	}
	printf("%d\n",suma);


	return 0;
}

