#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){

	int N,M,i,j;

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
	
	printf("\n\n");
	int max=x[0][0],i_max=1,j_max=1;
	
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%d ",x[i][j]);
			if(x[i][j]>=max){max=x[i][j];i_max=i+1;j_max=j+1;}
		}
		printf("\n");
	}
	
	printf("\nWartosc max=%d --> %d kolumna i %d wiersz",max,j_max,i_max);
	
	return 0;
}

