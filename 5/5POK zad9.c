#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){

	int N,M,i,j,suma=0;

	do{
		printf("Podaj 0<N<=20: ");
		scanf("%d",&N);
	}while((N<=0)||(N>20));
	
	do{
		printf("Podaj 0<M<=20: ");
		scanf("%d",&M);
	}while((M<=0)||(M>20));

	int x[N][M];
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("Wprowadz [%d][%d]: ",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			suma=suma+x[i][j];
		}
		printf("\nSuma %d wiersza: %d",i+1,suma);
		suma=0;
	}
	
	return 0;
}

