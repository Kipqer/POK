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
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(x[i][j]==x[j][i]){sym++;}
			if((x[i][j]==0)&&(i!=j)){diag++;}
			if((x[i][j]==0)&&(i<j)){gor++;}
		}
	}
	
	for(i=N-1;i>0;i--){
		wynik=wynik+i;
	}
	
	if(sym==N*N)printf("\nTablica symetryczna!");
	if(diag==N)printf("\nTablica diagonalna!");
	if(gor==wynik)printf("\nTablica gorno-trojkatna!");
	return 0;
}

