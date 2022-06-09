#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	int size=2;
	int N[size][size],M[size][size],C[size][size],i,j,k,suma=0;
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			N[i][j]=rand()%20;
			printf("%d  ",N[i][j]);
		}printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			M[i][j]=rand()%20;
			printf("%d  ",M[i][j]);
		}printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<size;i++){
		for(p=0;p<k;p++){
			
		}
	}
	
	
	/*for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			for(k=1;k<=size;k++){
				suma=suma+N[i][k]*M[k][j];
			}
			C[i][j]=suma;
			printf("%d  ",C[i][j]);
		}printf("\n");
*/	}
	return 0;
}

