#include <stdlib.h>
#include <math.h>
#include <stdio.h>


	float q,E,x;
	int n,i,p=1,wynik=1,P;

int silnia(int z){
	for(i=z;i>=1;i--){
		wynik=wynik*i;
	}
	return wynik;
}

int main(){
 
	printf("Podaj wartosc n: ");
	scanf("%d",&n);
	printf("Podaj wartosc q: ");
	scanf("%f",&q);
	printf("Podaj wartosc E: ");
	scanf("%f",&E);
	
	
	for(p;;p++){
		P=silnia(p);
		printf("!%d=%P\n",p,P);
		x=1.0/P*pow((n-q),(p-1))*exp(n*q);
		if(x<E){
			printf("Wynik: p=%d",p);
			break;
		}
	}

	
 return 0;
}

