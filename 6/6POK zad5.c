#include <stdlib.h>
#include <math.h>
#include <stdio.h>

	int bin[200]={0};
	int dz[200]={0}; 
	int i,n,suma;

int zmiana(int bin){
	suma=0;
	for(n=0;n<200;n++){
		if(bin%10!=0){
			suma=suma+pow(2,n);
		}
	bin=bin/10;
	}
	return suma;
}

int main(){

	srand(time(NULL));
	
	#define x "binarne.txt"
	#define y "wyniki.txt"
	
	FILE *binarne;
	FILE *wyniki;
	
	binarne=fopen(x,"r");
	wyniki=fopen(y,"w");
	
	for(i=0;;i++){
	if(feof(binarne))break;
		fscanf(binarne,"%d",&bin[i]);
		dz[i]=zmiana(bin[i]);
		fprintf(wyniki,"%d\n",dz[i]);
	}
	
	fclose(binarne);
	fclose(wyniki);
	
	return 0;
}

