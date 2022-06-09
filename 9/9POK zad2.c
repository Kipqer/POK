#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int Wx(int N, int x, int TabA[N]){
	
	int i,W[N];
	W[1]=TabA[N];
	
	for(i=0;i<N;i++){
	W[i+1]=W[i]*x+TabA[N-i];	
	}
	
	return (W[N+1]);
}

int main(){
	
	int N,i,x;
	
	do{
		printf("Podaj wielkosc wielomianu N: ");
		scanf("%d",&N);
	}while((N<0)||(N>20));
	
	int TabA[N];
		
	printf("Podaj x: ");
	scanf("%d",&x);
	
	for(i=0;i<N;i++){
		printf("Podaj a%d: ",i);
		scanf("%d",&TabA[i]);
		printf("Podaj a%d:%d",i,TabA[i]);
	}

	printf("W(x)=%d",Wx(N,x,TabA));

		
	return 0;
}

