#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int Wx(int N,int TabA[N], int x){

		int W[N]=TabA[N],i;	
		
		for(i=0;i<=N;i++){
			W[i]=W[i-1]*x+TabA[i];
		}
		
		return(W[i]);
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
		printf("Podaj a%d: ",i+1);
		scanf("%d",&TabA[i]);
	}

	printf("W(x)= %d",Wx(N,TabA,x));
		
	return 0;
}

