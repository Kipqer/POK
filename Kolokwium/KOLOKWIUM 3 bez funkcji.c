#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){	

	float wynik[200];
	int i,j,N;
	
	#define x "wyniki.txt"
	
	FILE *dane;
	
	dane=fopen(x,"r");
	
	for(i=1;;i++){
		if(feof(dane))break;
		fscanf(dane,"%f",&wynik[i]);
		printf("%f\n", wynik[i]);
	}
	N=i-1;
	fclose(dane);
	printf("\n");
	float X[N][N];
	
	for(i=1;i<=N;i++){      //i wiersze
		for(j=1;j<=N;j++){  //j kolumny
			if(i==1) X[i][j]=wynik[j];
			else if(j==1) X[i][j]=wynik[i];
			else X[i][j]=(X[i-1][j]+X[i][j-1])/2.0;
			printf("%f   ", X[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

