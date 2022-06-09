#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){

	srand(time(NULL));
	
	int N,M,i,j;

	do{
		printf("Podaj 0<N<=20: ");
		scanf("%d",&N);
	}while((N<=0)||(N>20));
	
	do{
		printf("Podaj 0<M<=20: ");
		scanf("%d",&M);
	}while((M<=0)||(M>20));

	float x[N][M];
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if((i==0)||(j==0))x[i][j]=rand()%11;
		}
	}
	
	for(i=1;i<N;i++){
		for(j=1;j<M;j++){
			x[i][j]=(x[i-1][j]+x[i][j-1])/2.0;
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %.2f ",x[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

