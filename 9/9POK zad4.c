#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

float max_min(int N, float Tab[N][N], int M, int K){
	int i,j;
	printf("\n\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%0.3f     ",Tab[j][i]);
			if(M==1){
				if(K==1){
					//Min + Pierwsza
					if(Tab[j][i]<x)x=Tab[j][i];
				}
				else{
					//Min + Ostatnia
					if(Tab[j][i]<=x)x=Tab[j][i];
				}
			}
			else{
				if(K==1){
					//Max + Pierwsza
					if(Tab[j][i]>x)x=Tab[j][i];
				}
				else{
					//Max + Ostatnia
					if(Tab[j][i]>=x)x=Tab[j][i];
				}
			}
		}
		printf("\n");
	}
	return (x);//zwracam wartosc tablicy, a nastepnie dopasowuje jej 'i' i 'j'
}


int main(){
	
	int N,K,M,i,j,wybor,wybor2;
	
	srand(time(NULL));
	
	do{
		printf("Podaj N: ");
		scanf("%d",&N);
	}while((N>20)||(N<1));
	
	float Tab[N][N];
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			Tab[j][i]=(rand()/(float)RAND_MAX)*100-50;
		}
	}
	
	printf("Wybierz opcje\n(1) Wartosc minimalna\n(2) Wartosc maksymalna\n");
	scanf("%d",&wybor);
	
	switch(wybor){
		case 1:
		M=1;	
		printf("Wybierz opcje\n(1) Pierwsza\n(2) Ostatnia\n");
		scanf("%d",&wybor2);
			switch(wybor2){
				case 1:
					K=1;
					break;
				case 2:
					K=2;
					break;
			}
		break;
			
		case 2:
		M=2;
		printf("Wybierz opcje\n(1) Pierwsza\n(2) Ostatnia\n");
		scanf("%d",wybor2);
			switch(wybor2){
				case 1:
					K=1;
					break;
				case 2:
					K=2;
					break;
			}
		break;
	}
	
	max_min(N,Tab,M,K);
	
	
	
	return 0;
}

