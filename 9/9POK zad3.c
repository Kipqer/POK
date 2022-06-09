#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int N,i,j;

int trans(int Tab[N][N], int N){
	int Tab2[N][N];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			Tab2[i][j]=Tab[i][j];
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			Tab[j][i]=Tab2[i][j];
		}
	}
	return(Tab[N][N]);
}

int main(){
	
	srand(time(NULL));

	printf("Podaj wielkosc tablicy N: ");
	scanf("%d",&N);
	int Tab[N][N],Tab2[N][N];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			Tab[i][j]=rand()%100+1;
			printf("%d  ",Tab[i][j]);
		}
		printf("\n");
	}
	
	Tab[N][N]=trans(Tab,N);
	
	printf("\n\n\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d  ",Tab[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

