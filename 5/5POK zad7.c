#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){

	int N,i,j,wynik=0,sym=0,diag=0,gor=0;

	do{
		printf("Podaj 0<N<=10: ");
		scanf("%d",&N);
	}while((N<=0)||(N>10));

	int x[N][N];
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Wprowadz [%d][%d]: ",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}
	
	printf("\n\n\n");
	
	printf("Tablica orginalna:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	
	printf("Tablica transponowana:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",x[j][i]);
		}
		printf("\n");
	}
	return 0;
}

