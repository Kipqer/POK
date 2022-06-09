#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int n,N=1,i;

int silnia(int n){
	if(n==0)n=1;
	for(i=n;i>=1;i--){
		N=N*i;
	}

	
	return(N);
}


int main(){
	
	printf("Podaj podstawe n: ");
	scanf("%d",&n);
	
	printf("Wynik to: %d",silnia(n));
	
	return 0;
}

