#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){

	int N,i;
	
	do{
		printf("Podaj liczbe 0<N<=30: ");
		scanf("%d",&N);
	}while((N<=0)||(N>30));
	
	int x[N];
	
	for(i=0;i<N;i++){
	printf("%d liczba: ",(i+1));
	scanf("%d",&x[N-i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<N;i++){
	printf("%d liczba: %d\n",i+1,x[i+1]);
	}

 	return 0;
}

