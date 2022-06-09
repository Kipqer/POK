#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	srand(time(NULL));
	
	#define x "dane.txt"
	
	FILE *nazwa;
	
	float A,wynik,N;
	int i;
	
	nazwa=fopen(x,"w");
	
	printf("Podaj A: ");
	scanf("%f",&A);
	printf("Podaj N: ");
	scanf("%f",&N);
	
	for(i=1;i<=N;i++){
		wynik=(rand()/(float)RAND_MAX)*2*A-A;
		fprintf(nazwa,"%f\n",wynik);
	}

	fclose(nazwa);
	
	return 0;
}

