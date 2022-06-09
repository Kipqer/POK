#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int size(){
		FILE *dane;
		#define x "wyniki.txt"
		dane=fopen(x,"r");
	
		int i,N;
		float xxx;
		for(i=1;;i++){
			if(feof(dane))break;
			fscanf(dane,"%f",&xxx);
		}
		
		N=i-1;
		fclose(dane);
		
		return N;
	}

float wczytanie(int N, float wynik[N], float X[N][N]){
		FILE *dane;
		#define x "wyniki.txt"
		dane=fopen(x,"r");
	
		printf("Liczby wczytane z pliu: \n");
	
		int i,j;
		for(i=1;;i++){
			if(feof(dane))break;
			fscanf(dane,"%f",&wynik[i]);
			printf("%f\n", wynik[i]);
		}
		
		fclose(dane);
		printf("\n");
		
		printf("Tablica uzupelniona o dane z pliku: \n");
		
		for(i=1;i<=N;i++){      //i wiersze
			for(j=1;j<=N;j++){  //j kolumny
				if(i==1) X[i][j]=wynik[j];
				else if(j==1) X[i][j]=wynik[i];
				else X[i][j]=0;
				printf("%f   ", X[i][j]);
			}
		printf("\n");
		}
		
		return N;
	}
	
float srednia(int N, float X[N][N]){
	int i, j;
	printf("Tablica wypelniona: \n");
	for(i=1;i<=N;i++){      //i wiersze
		for(j=1;j<=N;j++){  //j kolumny
			if(i==1){}
			else if(j==1){}
			else X[i][j]=(X[i-1][j]+X[i][j-1])/2.0;
			
			printf("%f   ", X[i][j]);
		}
	printf("\n");
	}
}

int main(){	
	
	int N;
	N=size();
	float wynik[N], X[N][N];
	
	wczytanie(N, wynik, X);
	printf("\n");
	srednia(N, X);

	
	return 0;
}

