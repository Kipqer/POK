#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int i,j,k,Nmax;
float x,Xp=1,wynik=0;

int silnia(int n){
	int N=1;
	if(n==0)n=1;
	for(k=n;k>=1;k--){
		N=N*k;
	}
	
	return(N);
}

float potega(float x,int p){
	if(p==0)p=1;
	for(j=1;j<=p;j++){
		Xp=Xp*x;
	}
	
	return(Xp);
}

float E(float x, int Nmax){
	
	for(i=0;i<=Nmax;i++){
		wynik=wynik+potega(x,i)/silnia(i)*1.0;
	}

	return(wynik);
}


int main(){
	
	printf("Podaj podstawe Nmax: ");
	scanf("%d",&Nmax);
	printf("Podaj podstawe x: ");
	scanf("%f",&x);
	
	printf("Wynik exp(%f)= %f",x,exp(x));
	printf("\nMoj wynik to: %f",E(x,Nmax));

	return 0;
}

